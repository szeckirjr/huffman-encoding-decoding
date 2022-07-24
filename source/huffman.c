// Import header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "huffman.h"
#include <math.h>

#define PARENT(i) ((i - 1) / 2)

void printBinary(unsigned long int code, int codeLength)
{
    // int digit;
    // for (digit = codeLength - 1; digit >= 0; digit--)
    // {
    //     printf("%c", code & (1 << digit) ? '1' : '0');
    // }
    // printf(" - Code length: %d", codeLength);
    unsigned i;
    for (i = 1 << (codeLength - 1); i > 0; i = i / 2)
        (code & i) ? printf("1") : printf("0");
    printf(" - length: %d\n", codeLength);
}

char *intToStringBinary(unsigned long int code, int codeLength)
{
    unsigned i;
    char *str = (char *)malloc(sizeof(char) * codeLength);
    for (i = 1 << (codeLength - 1); i > 0; i = i / 2)
        (code & i) ? strcat(str, "1") : strcat(str, "0");
    return str;
}

void printHuffmanTree(struct MinHuffmanNode *node, int level)
{
    if (node == NULL)
    {
        return;
    }
    printHuffmanTree(node->left, level + 1);
    if (node->left == NULL && node->right == NULL)
    {
        printf("%*c%s\n", level * 4, ' ', node->data);
    }
    printHuffmanTree(node->right, level + 1);
}

struct MinHuffmanNode *newHuffmanNode(char *data, int freq)
{
    struct MinHuffmanNode *node = (struct MinHuffmanNode *)malloc(sizeof(struct MinHuffmanNode));
    strcpy(node->data, data);
    node->freq = freq;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void swapMinHuffmanNodes(struct MinHuffmanNode **a, struct MinHuffmanNode **b)
{
    struct MinHuffmanNode *t = *a;
    *a = *b;
    *b = t;
}

void minHeapify(struct MinHuffman *minHuffman, int idx)
{
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < minHuffman->size && minHuffman->array[left]->freq < minHuffman->array[smallest]->freq)
    {
        smallest = left;
    }

    if (right < minHuffman->size && minHuffman->array[right]->freq < minHuffman->array[smallest]->freq)
    {
        smallest = right;
    }

    if (smallest != idx)
    {
        swapMinHuffmanNodes(&minHuffman->array[smallest], &minHuffman->array[idx]);
        minHeapify(minHuffman, smallest);
    }
}

void buildMinHuffman(struct MinHuffman *minHuffman)
{
    int n = minHuffman->size - 1;
    int i;
    for (i = (n - 1) / 2; i >= 0; --i)
    {
        minHeapify(minHuffman, i);
    }
}

struct MinHuffmanNode *extractMin(struct MinHuffman *minHuffman)
{
    struct MinHuffmanNode *temp = minHuffman->array[0];
    minHuffman->array[0] = minHuffman->array[minHuffman->size - 1];

    --minHuffman->size;
    minHeapify(minHuffman, 0);

    return temp;
}

void insertMinHuffman(struct MinHuffman *minHuffman, struct MinHuffmanNode *minHuffmanNode)
{
    ++minHuffman->size;
    int i = minHuffman->size - 1;

    while (i && minHuffmanNode->freq < minHuffman->array[(i - 1) / 2]->freq)
    {
        minHuffman->array[i] = minHuffman->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }

    minHuffman->array[i] = minHuffmanNode;
}

struct MinHuffman *createMinHuffman(unsigned long int capacity)
{
    struct MinHuffman *minHuffman = (struct MinHuffman *)malloc(sizeof(struct MinHuffman));
    minHuffman->size = 0;
    minHuffman->capacity = capacity;
    minHuffman->array = (struct MinHuffmanNode **)malloc(capacity * sizeof(struct MinHuffmanNode *));
    return minHuffman;
}

struct MinHuffman *createAndBuildMinHuffman()
{
    struct MinHuffman *minHuffman = createMinHuffman(ALPHABET_SIZE);

    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        minHuffman->array[i] = newHuffmanNode(alphabetFreq[i].character, alphabetFreq[i].frequency);
    }
    minHuffman->size = ALPHABET_SIZE;
    buildMinHuffman(minHuffman);
    return minHuffman;
};

struct MinHuffmanNode *buildHuffmanTree()
{
    struct MinHuffmanNode *left, *right, *top;
    struct MinHuffman *minHuffman = createAndBuildMinHuffman();
    // treeprintarray(minHuffman->array, 140);
    while (minHuffman->size != 1)
    {
        left = extractMin(minHuffman);
        right = extractMin(minHuffman);

        top = newHuffmanNode("TEMP", left->freq + right->freq);
        top->left = left;
        top->right = right;

        insertMinHuffman(minHuffman, top);
    }

    return extractMin(minHuffman);
};

CharCode_T *buildCodeTable(struct MinHuffmanNode *root, int arr[], int binaryCode, int top)
{
    if (root->right)
    {
        binaryCode = binaryCode | 1;
        binaryCode <<= 1;
        arr[top] = 1;
        buildCodeTable(root->right, arr, binaryCode, top + 1);
    }
    if (root->left)
    {
        binaryCode = binaryCode << 1;
        arr[top] = 0;
        buildCodeTable(root->left, arr, binaryCode, top + 1);
    }

    if (!(root->left) && !(root->right))
    {
        int charLength = strlen(root->data);
        CharCodeTable[currCount].character = malloc(sizeof(char) * charLength);
        strcpy(CharCodeTable[currCount].character, root->data);

        // 01110011100 000 110110 110110 0110

        // int index = 0;
        unsigned long int code = 0;
        int codeLength = 0;
        // char *code = (char *)malloc(sizeof(char) * top);
        for (int i = 0; i < top; i++)
        {
            // printBinary(code, top);
            code = code | arr[i];
            if (i < top - 1)
            {
                code = code << 1;
            }
            // code = code << 1;
            codeLength++;

            // index += sprintf(&code[index], "%d", arr[i]);
        }

        // printf("Assigning code %lu to character %s with length %d\n", code, root->data, top);

        CharCodeTable[currCount].code = code;
        CharCodeTable[currCount].length = codeLength;
        currCount++;
    }
    return CharCodeTable;
}

unsigned long int getCode(char character)
{
    for (int i = 0; i < currCount; i++)
    {
        if (CharCodeTable[i].character[0] == character)
        {
            return CharCodeTable[i].code;
        }
    }
    return -1;
}

int getCodeLength(char character)
{
    for (int i = 0; i < currCount; i++)
    {
        if (CharCodeTable[i].character[0] == character)
        {
            return CharCodeTable[i].length;
        }
    }
    return -1;
}

struct EncodeResult
{
    unsigned long int encodedString;
    int codeLength;
    char *rawString;
};

struct EncodeResult *encode(char *rawString)
{
    unsigned long int encodedString = 0;
    int totalCodeLength = 0;
    FILE *file = fopen("encodedString.txt", "w");
    fprintf(file, "");
    fclose(file);
    FILE *encodedFile = fopen("encodedString.txt", "a");
    for (int i = 0; i < strlen(rawString); i++)
    {
        unsigned long int code = getCode(rawString[i]);
        int codeLength = getCodeLength(rawString[i]);

        if (code == -1)
        {
            printf("Character %c not found in code table\n", rawString[i]);
            return 0;
        }

        printf("Got code for character %c: ", rawString[i]);
        printBinary(code, codeLength);

        totalCodeLength += codeLength;

        encodedString = encodedString << codeLength;
        // printBinary(encodedString, totalCodeLength);

        fprintf(encodedFile, "%s", intToStringBinary((code & ((1 << codeLength) - 1)), codeLength));

        encodedString = (encodedString) | (code & ((1 << codeLength) - 1));
        // printBinary(encodedString, totalCodeLength);

        // for (int j = 0; j < codeLength; j++)
        // {
        //     encodedString = encodedString << 1;
        //     encodedString = encodedString | (code & 1);
        //     code = code >> 1;
        // }
    }
    printf("Encoded string %s to %lu\n", rawString, encodedString);
    struct EncodeResult *result = (struct EncodeResult *)malloc(sizeof(struct EncodeResult));
    result->encodedString = encodedString;
    result->codeLength = totalCodeLength;
    result->rawString = (char *)malloc(sizeof(char) * strlen(rawString));
    strcpy(result->rawString, rawString);
    fclose(encodedFile);

    return result;
}

char *decodeFile(char *filename, int codeLength, struct MinHuffmanNode *root)
{
    FILE *file = fopen(filename, "r");
    FILE *destFile = fopen("decodedString.txt", "w");
    fprintf(destFile, "");
    fclose(destFile);
    FILE *decodedFile = fopen("decodedString.txt", "a");
    char c = fgetc(file);
    struct MinHuffmanNode *current = root;
    while (c != EOF)
    {
        // printf("%c", c);
        if (c == '1')
        {
            current = current->right;
        }
        if (c == '0')
        {
            current = current->left;
        }
        if (!(current->left) && !(current->right))
        {
            printf("%s", current->data);
            fprintf(decodedFile, "%s", current->data);
            current = root;
        }
        c = fgetc(file);
    }
    fclose(file);
    return "Hey";
}

char *decode(unsigned long int encodedString, int encodedLength, struct MinHuffmanNode *root)
{
    printf("Decoding string %lu\n", encodedString);
    struct MinHuffmanNode *current = root;
    for (int i = 1; i < encodedLength + 2; i++)
    {

        if (!(current->left) && !(current->right))
        {
            // 1111100110 R
            //
            printf("Found leafe node %s\n", current->data);
            current = root;
        }

        int bit = (encodedString & (((1 << 1) - 1) << (encodedLength - i))) >> (encodedLength - i);
        // printf("Bit %d: %d\n", i, bit);
        if (bit == 1)
        {
            // printf("Moving right!\n");
            current = current->right;
        }
        if (bit == 0)
        {
            // printf("Moving left!\n");
            current = current->left;
        }
    }

    return "Hi";
}

void HuffmanCodes()
{
    int huffmanTree[MAX_TREE_SIZE], top = 0;

    // Create Huffman Tree
    struct MinHuffmanNode *root = buildHuffmanTree();

    // printHuffmanTree(root, 0);
    // treeprint(root, NULL, 't', 0);

    printf("Huffman Tree Created\n");

    buildCodeTable(root, huffmanTree, 0, 0);

    printf("Generated %d codes\n", currCount);

    // Loop to print all codes
    // for (int i = 0; i < currCount; i++)
    // {
    //     printf("%s: %lu = ", CharCodeTable[i].character, CharCodeTable[i].code);
    //     printBinary(CharCodeTable[i].code, CharCodeTable[i].length);
    // }

    char *stringToConvert = "THIS IS INSANEEEE"; // 1111100110 000 1110000

    // 111001010 1000 01000 010

    struct EncodeResult *result = encode(stringToConvert);

    // printf("%s: ", stringToConvert);
    // printBinary(result->encodedString, result->codeLength);

    // char *decodedString = decode(result->encodedString, result->codeLength, root);
    // char *decodedString = decode(010101111011100101100, 21, root);
    // printf("Decoded: %s\n", decodedString);
    printf("Decoded to %s\n", decodeFile("encodedString.txt", result->codeLength, root));
}

int main()
{
    printf("Starting generating codes...\n");
    HuffmanCodes();
    printf("Done!\n");
    return 0;
}