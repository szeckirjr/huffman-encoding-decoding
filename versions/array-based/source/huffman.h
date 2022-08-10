#include "frequency.h"
#define MAX_TREE_SIZE 100
#define MAX_ARRAY_TREE_SIZE 119237951

typedef struct CharCode
{
    char *character;
    unsigned long int code;
    int length;
} CharCode_T;

// A Huffman tree node
struct MinHuffmanNode
{
    // One of the input characters
    char data[5];
    // Frequency of the character
    unsigned freq;
    // Left and right child of this node
    struct MinHuffmanNode *left, *right;
};

// Collection of huffman nodes
struct MinHuffman
{
    // Current size of min heap huffman tree
    unsigned int size;
    // Capacity of min heap huffman tree
    unsigned int capacity;
    // Array of node pointers
    struct MinHuffmanNode **array;
};

struct EncodeResult *encode(char *rawString);

enum mode {
    ENCODE,
    DECODE
};

void HuffmanCodes(enum mode type, char *inputFilename, char *outputFilename);

// char *decode(char *binaryString, struct MinHeapNode *root);

// Hold global variables for CharFreq table nad CharCode table
CharFreq_T CharFreqTable[ALPHABET_SIZE];
CharCode_T CharCodeTable[ALPHABET_SIZE];
int currCount;