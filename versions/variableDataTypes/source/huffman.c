// Import header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "huffman.h"
#include <math.h>
#include <unistd.h>

#define PARENT(i) ((i - 1) / 2)

int currCount = 0;
CharFreq_T alphabetFreq[ALPHABET_SIZE] = {
    {"a", 161216, },
    {"b", 27295, },
    {"c", 55511, },
    {"d", 77756, },
    {"e", 260939, },
    {"f", 51802, },
    {"g", 38874, },
    {"h", 119201, },
    {"i", 141803, },
    {"j", 1851, },
    {"k", 12249, },
    {"l", 84822, },
    {"m", 50353, },
    {"n", 143273, },
    {"o", 154556, },
    {"p", 36920, },
    {"q", 2807, },
    {"r", 123461, },
    {"s", 131583, },
    {"t", 190634, },
    {"u", 57127, },
    {"v", 20852, },
    {"w", 38441, },
    {"x", 3340, },
    {"y", 37622, },
    {"z", 1452, },
    {"A", 4427, },
    {"B", 2701, },
    {"C", 2774, },
    {"D", 1614, },
    {"E", 2869, },
    {"F", 2072, },
    {"G", 1137, },
    {"H", 3603, },
    {"I", 9450, },
    {"J", 944, },
    {"K", 526, },
    {"L", 1971, },
    {"M", 3274, },
    {"N", 2371, },
    {"O", 1864, },
    {"P", 2097, },
    {"Q", 85, },
    {"R", 2153, },
    {"S", 3837, },
    {"T", 6688, },
    {"U", 548, },
    {"V", 836, },
    {"W", 2603, },
    {"X", 548, },
    {"Y", 1032, },
    {"Z", 152, },
    {" ", 465226, },
    {"\t", 0, },
    {"\n", 0, },
    {",", 42934, },
    {".", 21884, },
    {"!", 1110, },
    {"?", 1222, },
    {";", 2909, },
    {":", 1169, },
    {"\"", 3095, },
    {"'", 1918, },
    {"`", 0, },
    {"-", 6143, },
    {"_", 4822, },
    {"=", 111, },
    {"+", 11, },
    {"*", 320, },
    {"%", 19, },
    {"#", 0, },
    {"$", 7, },
    {"@", 0, },
    {"&", 32, },
    {"^", 9, },
    {"~", 0, },
    {"|", 6, },
    {"\\", 0, },
    {"<", 0, },
    {">", 0, },
    {"/", 7, },
    {"{", 0, },
    {"}", 0, },
    {"[", 287, },
    {"]", 287, },
    {"(", 985, },
    {")", 985, },
    {"0", 1017, },
    {"1", 2516, },
    {"2", 1200, },
    {"3", 741, },
    {"4", 690, },
    {"5", 723, },
    {"6", 783, },
    {"7", 642, },
    {"8", 909, },
    {"9", 665, },
};

char *intToStringBinary(unsigned long int code, int codeLength)
{
    unsigned i;
    char *str = (char *)malloc(sizeof(char) * codeLength);
    for (i = 1 << (codeLength - 1); i > 0; i = i / 2)
        (code & i) ? strcat(str, "1") : strcat(str, "0");
    return str;
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
    int i;
    struct MinHuffman *minHuffman = createMinHuffman(ALPHABET_SIZE);

    for (i = 0; i < ALPHABET_SIZE; i++)
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

        unsigned long int code = 0;
        int codeLength = 0;
        int i;
        for (i = 0; i < top; i++)
        {
            code = code | arr[i];
            if (i < top - 1)
            {
                code = code << 1;
            }
            codeLength++;
        }

        CharCodeTable[currCount].code = code;
        CharCodeTable[currCount].length = codeLength;
        currCount++;
    }
    return CharCodeTable;
}

unsigned long int getCode(char character)
{
    int i;
    for (i = 0; i < currCount; i++)
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
    int i;
    for (i = 0; i < currCount; i++)
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

struct EncodeResult *encodeFile(char *inputFilename, char *outputFilename)
{

    FILE *file = fopen(inputFilename, "r");
    FILE *destFile = fopen(outputFilename, "w");
    fprintf(destFile, "");
    fclose(destFile);
    FILE *encodedFile = fopen(outputFilename, "a");
    int c = fgetc(file);
    unsigned long int encodedString = 0;
    int totalCodeLength = 0;
    while (c != EOF)
    {
        unsigned long int code = getCode(c);
        int codeLength = getCodeLength(c);

        if (code == -1)
        {
            printf("Character %c not found in code table, so it was ignored\n", c);
        }
        else
        {

            totalCodeLength += codeLength;

            encodedString = encodedString << codeLength;

            fprintf(encodedFile, "%s", intToStringBinary((code & ((1 << codeLength) - 1)), codeLength));

            encodedString = (encodedString) | (code & ((1 << codeLength) - 1));
        }
        c = fgetc(file);
    }

    struct EncodeResult *result = (struct EncodeResult *)malloc(sizeof(struct EncodeResult));
    result->encodedString = encodedString;
    result->codeLength = totalCodeLength;
    fclose(encodedFile);

    return result;
}

void decodeFile(char *inputFilename, char *outputFilename, struct MinHuffmanNode *root)
{
    FILE *file = fopen(inputFilename, "r");
    FILE *destFile = fopen(outputFilename, "w");
    fprintf(destFile, "");
    fclose(destFile);
    FILE *decodedFile = fopen(outputFilename, "a");
    int c = fgetc(file);
    struct MinHuffmanNode *current = root;
    while (c != EOF)
    {
        if (c == 49)
        {
            current = current->right;
        }
        if (c == 48)
        {
            current = current->left;
        }
        if (!(current->left) && !(current->right))
        {
            //printf("%s", current->data);
            fprintf(decodedFile, "%s", current->data);
            current = root;
        }
        if (c != '1' && c != '0')
        {
            printf("%c is not an accepted format for decoding, so it was ignored\n", c);
        }
        c = fgetc(file);
    }
    fclose(file);
}

void HuffmanCodes(enum mode type, char *inputFilename, char *outputFilename)
{
    printf("Starting generating codes...\n");

    int huffmanTree[MAX_TREE_SIZE], top = 0;

    // Create Huffman Tree
    struct MinHuffmanNode *root = buildHuffmanTree();

    printf("Huffman Tree Created\n");

    buildCodeTable(root, huffmanTree, 0, 0);

    printf("Generated %d codes\n", currCount);

    if (type == ENCODE)
    {
        printf("Encoding file %s\n", inputFilename);
        encodeFile(inputFilename, outputFilename);
    }
    if (type == DECODE)
    {
        printf("Decoding file %s\n", inputFilename);
        decodeFile(inputFilename, outputFilename, root);
    }

    printf("\nDone!\n");
    currCount = 0;
}

/*int main(int argc, char *argv[])
{
    int isEncoding = 0;
    int isDecoding = 0;
    char *inputFile;
    char *outputFile;

    int opt;
    while ((opt = getopt(argc, argv, "edi:o:")) != -1)
    {
        switch (opt)
        {
        case 'e':
        {
            isEncoding = 1;
            break;
        }
        case 'd':
        {
            isDecoding = 1;
            break;
        }
        case 'i':
        {
            inputFile = malloc(sizeof(char) * strlen(optarg));
            strcpy(inputFile, optarg);
            break;
        }
        case 'o':
        {
            outputFile = malloc(sizeof(char) * strlen(optarg));
            strcpy(outputFile, optarg);
            break;
        }
        default:
            fprintf(stderr, "Usage: %s [-ed] [file...]\n", argv[0]);
            exit(EXIT_FAILURE);
        }
    }

    if (isEncoding && isDecoding)
    {
        printf("Cannot encode and decode at the same time, please only use one flag -e or -d, with respective input and output files\n");
    }
    else if (isEncoding)
    {
        HuffmanCodes(ENCODE, inputFile, outputFile);
    }
    else if (isDecoding)
    {
        HuffmanCodes(DECODE, inputFile, outputFile);
    }
    else
    {
        printf("Please specify if you want encoding or decoding using -e and -d\n");
    }

    return 0;
}*/