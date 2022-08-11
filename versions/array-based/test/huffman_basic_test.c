#include <stdio.h>
#include "../source/huffman.h"


int main() {
    char *inputFile = "..\\..\\..\\input\\rawText2.txt";
    char *encodedFile = "basicTestOutput\\encodedFile.txt";
    char *decodedFile = "basicTestOutput\\decodedFile.txt";

    //HuffmanCodes(ENCODE, inputFile, encodedFile);
    HuffmanCodes(DECODE, encodedFile, decodedFile);    

    return 0;
}