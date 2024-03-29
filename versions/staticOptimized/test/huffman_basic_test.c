#include <stdio.h>
#include <stdint.h>
#include "../source/huffman.h"

int main()
{
    char *inputFile = "../../../input/rawText.txt";
    char *encodedFile = "basicTestOutput/encodedFile.txt";
    char *decodedFile = "basicTestOutput/decodedFile.txt";

    HuffmanCodes(ENCODE, inputFile, encodedFile);
    HuffmanCodes(DECODE, encodedFile, decodedFile);

    return 0;
}