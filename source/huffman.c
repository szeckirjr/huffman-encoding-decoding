#include "huffman.h"
#include <stdio.h>

typedef struct HuffNode HuffNode_T;
struct HuffNode
{
    char character;
    float frequency;
    HuffNode_T *left, *right;
};

CharFreq_T *getTwoMinimums(CharFreq_T *array, int size)
{
    CharFreq_T *result = malloc(sizeof(CharFreq_T) * 2);
    int i;
    for (i = 0; i < size; i++)
    {
        if (array[i].frequency < result[0].frequency)
        {
            result[1] = result[0];
            result[0] = array[i];
        }
        else if (array[i].frequency < result[1].frequency)
        {
            result[1] = array[i];
        }
    }
    return result;
}

CharFreq_T getMin(CharFreq_T *array, int size)
{
    int i;
    CharFreq_T min = array[0];
    for (i = 1; i < size; i++)
    {
        if (array[i].frequency < min.frequency)
        {
            min = array[i];
        }
    }
    return min;
}

unsigned int buildHuffmanTree(CharFreq_T *alphabet)
{
    int i = 0;
    while (alphabet[i].character)
    {
        printf("%c: ", alphabet[i].character);
        printf("%f\n", alphabet[i].frequency);
        i++;
    }
    return i;
}

unsigned int encode(char *text)
{
    unsigned int length = 0;

    // loop through each char of plain text
    int i = 0;
    while (text[i] != '\0')
    {
        printf("%c, %d\n", text[i], text[i]);
        i++;
    }
    return length;
}

#define A                                  \
    {                                      \
        .character = 'a', .frequency = 0.5 \
    }
#define B                                   \
    {                                       \
        .character = 'b', .frequency = 0.15 \
    }
#define C                                   \
    {                                       \
        .character = 'c', .frequency = 0.26 \
    }
#define D                                   \
    {                                       \
        .character = 'd', .frequency = 0.17 \
    }
#define E                                   \
    {                                       \
        .character = 'e', .frequency = 0.02 \
    }

CharFreq_T alphabet[] = {A, B, C, D, E};

int main()
{
    encode("Hello World");
    buildHuffmanTree(alphabet);
}