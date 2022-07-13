#include "frequency.h"
#define MAX_TREE_HT 100

typedef struct CharCode
{
    char *character;
    char *code;
    int length;
} CharCode_T;

// A Huffman tree node
struct MinHeapNode
{

    // One of the input characters
    char data[5];

    // Frequency of the character
    unsigned freq;

    // Left and right child of this node
    struct MinHeapNode *left, *right;
};

unsigned long long int encode(char *rawString);

char *decode(char *binaryString, struct MinHeapNode *root);

// Hold global variables for CharFreq table nad CharCode table
CharFreq_T CharFreqTable[ALPHABET_SIZE];
CharCode_T CharCodeTable[ALPHABET_SIZE];
int currCount = 0;