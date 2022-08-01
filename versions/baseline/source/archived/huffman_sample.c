// C program for Huffman Coding
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "huffman_sample.h"

// This constant can be avoided by explicitly
// calculating height of Huffman Tree

// A Min Heap: Collection of
// min-heap (or Huffman tree) nodes
struct MinHeap
{

    // Current size of min heap
    unsigned size;

    // capacity of min heap
    unsigned capacity;

    // Array of minheap node pointers
    struct MinHuffmanNode **array;
};

// A utility function allocate a new
// min heap node with given character
// and frequency of the character
struct MinHuffmanNode *newNode(char *data, int freq)
{
    struct MinHuffmanNode *temp = (struct MinHuffmanNode *)malloc(
        sizeof(struct MinHuffmanNode));

    temp->left = temp->right = NULL;
    strcpy(temp->data, data);
    temp->freq = freq;

    return temp;
}

// A utility function to create
// a min heap of given capacity
struct MinHeap *createMinHeap(unsigned capacity)

{

    struct MinHeap *minHeap = (struct MinHeap *)malloc(sizeof(struct MinHeap));

    // current size is 0
    minHeap->size = 0;

    minHeap->capacity = capacity;

    minHeap->array = (struct MinHuffmanNode **)malloc(
        minHeap->capacity * sizeof(struct MinHuffmanNode *));
    return minHeap;
}

// A utility function to
// swap two min heap nodes
void swapMinHuffmanNode(struct MinHuffmanNode **a,
                        struct MinHuffmanNode **b)

{

    struct MinHuffmanNode *t = *a;
    *a = *b;
    *b = t;
}

// The standard minHeapify function.
void minHeapify(struct MinHeap *minHeap, int idx)

{

    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq)
        smallest = left;

    if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq)
        smallest = right;

    if (smallest != idx)
    {
        swapMinHuffmanNode(&minHeap->array[smallest],
                           &minHeap->array[idx]);
        minHeapify(minHeap, smallest);
    }
}

// A utility function to check
// if size of heap is 1 or not
int isSizeOne(struct MinHeap *minHeap)
{

    return (minHeap->size == 1);
}

// A standard function to extract
// minimum value node from heap
struct MinHuffmanNode *extractMin(struct MinHeap *minHeap)

{

    struct MinHuffmanNode *temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];

    --minHeap->size;
    minHeapify(minHeap, 0);

    return temp;
}

// A utility function to insert
// a new node to Min Heap
void insertMinHeap(struct MinHeap *minHeap,
                   struct MinHuffmanNode *minHeapNode)

{

    ++minHeap->size;
    int i = minHeap->size - 1;

    while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq)
    {

        minHeap->array[i] = minHeap->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }

    minHeap->array[i] = minHeapNode;
}

// A standard function to build min heap
void buildMinHeap(struct MinHeap *minHeap)

{

    int n = minHeap->size - 1;
    int i;

    for (i = (n - 1) / 2; i >= 0; --i)
        minHeapify(minHeap, i);
}

// A utility function to print an array of size n
void printArr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%d", arr[i]);

    printf("\n");
}

// Utility function to check if this node is leaf
int isLeaf(struct MinHuffmanNode *root)

{

    return !(root->left) && !(root->right);
}

// Creates a min heap of capacity
// equal to size and inserts all character of
// data[] in min heap. Initially size of
// min heap is equal to capacity
struct MinHeap *createAndBuildMinHeap()

{
    int i;
    struct MinHeap *minHeap = createMinHeap(ALPHABET_SIZE);

    for (i = 0; i < ALPHABET_SIZE; ++i)
        minHeap->array[i] = newNode(alphabetFreq[i].character, alphabetFreq[i].frequency);

    minHeap->size = ALPHABET_SIZE;
    buildMinHeap(minHeap);

    return minHeap;
}

// The main function that builds Huffman tree
struct MinHuffmanNode *buildHuffmanTree()

{
    struct MinHuffmanNode *left, *right, *top;

    // Step 1: Create a min heap of capacity
    // equal to size. Initially, there are
    // modes equal to size.
    struct MinHeap *minHeap = createAndBuildMinHeap();

    // Iterate while size of heap doesn't become 1
    while (!isSizeOne(minHeap))
    {

        // Step 2: Extract the two minimum
        // freq items from min heap
        left = extractMin(minHeap);
        right = extractMin(minHeap);

        // Step 3: Create a new internal
        // node with frequency equal to the
        // sum of the two nodes frequencies.
        // Make the two extracted node as
        // left and right children of this new node.
        // Add this node to the min heap
        // '$' is a special value for internal nodes, not
        // used
        top = newNode("$", left->freq + right->freq);

        top->left = left;
        top->right = right;

        insertMinHeap(minHeap, top);
    }

    // Step 4: The remaining node is the
    // root node and the tree is complete.
    return extractMin(minHeap);
}

// Prints huffman codes from the root of Huffman Tree.
// It uses arr[] to store codes
void printCodes(struct MinHuffmanNode *root, int arr[],
                int top)

{

    // Assign 0 to left edge and recur
    if (root->left)
    {

        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }

    // Assign 1 to right edge and recur
    if (root->right)
    {

        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }

    // If this is a leaf node, then
    // it contains one of the input
    // characters, print the character
    // and its code from arr[]
    if (isLeaf(root))
    {

        printf("%s: ", root->data);
        printArr(arr, top);
    }
}

CharCode_T *buildCodeTable(struct MinHuffmanNode *root, int arr[], int top)
{
    if (root->left)
    {
        arr[top] = 0;
        buildCodeTable(root->left, arr, top + 1);
    }
    if (root->right)
    {
        arr[top] = 1;
        buildCodeTable(root->right, arr, top + 1);
    }
    if (isLeaf(root))
    {
        int code_length = strlen(root->data);
        CharCodeTable[currCount].character = malloc(sizeof(char) * code_length);
        strcpy(CharCodeTable[currCount].character, root->data);

        int index = 0;
        int i;
        char *code = (char *)malloc(sizeof(char) * top);
        for (i = 0; i < top; i++)
        {
            index += sprintf(&code[index], "%d", arr[i]);
        }

        CharCodeTable[currCount].code = code;

        CharCodeTable[currCount].length = code_length;
        currCount++;
    }
    return CharCodeTable;
}

char *getCode(char character)
{
    int i;
    for (i = 0; i < currCount; i++)
    {
        if (CharCodeTable[i].character[0] == character)
        {
            return CharCodeTable[i].code;
        }
    }
    return NULL;
}

char *long_to_binary(unsigned long long k)

{
    static char c[65];
    c[0] = '\0';

    unsigned long long val;
    for (val = 1ULL << (sizeof(unsigned long long) * 8 - 1); val > 0; val >>= 1)
    {
        strcat(c, ((k & val) == val) ? "1" : "0");
    }
    return c;
}

unsigned long int encode(char *rawString)
{
    int i;
    unsigned long long int encodedString = 0;
    for (i = 0; i < strlen(rawString); i++)
    {
        char *code = getCode(rawString[i]);
        // printf("Got code for %c: %s\n", rawString[i], code);
        if (code == NULL)
        {
            printf("Character %c not found in the code table\n", rawString[i]);
            return 0;
        }
        int j;
        for (j = 0; j < strlen(code); j++)
        {
            encodedString <<= 1;
            encodedString |= code[j] - '0';
        }
    }
    return encodedString;
}

char *decode(char *binaryString, struct MinHuffmanNode *root)
{
    // char *codedString = long_to_binary(binaryString);

    int i;
    struct MinHuffmanNode *temp = root;
    for (i = 0; i < strlen(binaryString); i++)
    {
        // printf("Reading %c\n", binaryString[i]);
        // printf("Current root: %s\n", temp->data);
        // printf("Left child: %s\n", temp->left->data);
        // printf("Right child: %s\n", temp->right->data);

        if (binaryString[i] == '0')
        {
            // printf("Going left\n");
            temp = temp->left;
        }
        if (binaryString[i] == '1')
        {
            // printf("Going right\n");
            temp = temp->right;
        }
        if (isLeaf(temp))
        {
            printf("Found leaf node %s\n", temp->data);
            temp = root;
            // printf("%c is %s\n", binaryString[i], temp->data);
        }
    }
    return binaryString;
}

char *decodeRecursive(unsigned long long int binaryString, char *decodedString)
{
    if (binaryString == 0)
    {
        return decodedString;
    }
    int i;
    for (i = 0; i < currCount; i++)
    {
        if (binaryString & 1)
        {
            strcat(decodedString, CharCodeTable[i].character);
        }
        binaryString >>= 1;
    }
    return decodeRecursive(binaryString, decodedString);
}

// The main function that builds a
// Huffman Tree and print codes by traversing
// the built Huffman Tree
void HuffmanCodes()

{
    int arr[MAX_TREE_SIZE],
        top = 0;
    // Construct Huffman Tree
    struct MinHuffmanNode *root = buildHuffmanTree();
    printf("\n Huffman Tree Created\n");

    buildCodeTable(root, arr, 0);

    printf("Generated %d codes\n", currCount);

    // int i;
    // for (i = 0; i < currCount; i++)
    // {
    //     printf("%s: %s\n", CharCodeTable[i].character, CharCodeTable[i].code);
    // }

    // printf("Hello World : %s\n", long_to_binary(encode("Hello World")));

    // unsigned long long int testString = 0b0111001110000011011111011111001111010101010111100011011011110110;
    decode(long_to_binary(encode("Eduardo Szeckir is the best")), root);
    //  Print Huffman codes using
    //  the Huffman tree built above

    // printCodes(root, arr, top);
}

// Driver code
int main()
{

    printf("Starting generating codes...\n");
    HuffmanCodes();
    printf("Done");

    return 0;
}
