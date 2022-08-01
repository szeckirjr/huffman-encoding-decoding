#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../source/huffman.h"

void getAverageRunTime(enum mode type, char *inputFile, char *outputFile, char *timeFile) {
    
    FILE *timeFilePtr = fopen(timeFile, "a");
    int i;
    double sum = 0;

    for(i = 0; i < 100; i++) {
        remove(outputFile);
        clock_t start_t, end_t;
        double total_t;
        start_t = clock();
        HuffmanCodes(type, inputFile, outputFile);
        end_t = clock();
        total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
        sum = sum + total_t;
    }
    fprintf(timeFilePtr, "%f", sum/100);
    fclose(timeFilePtr);
}

int main() {
    char *inputFile = "rawText.txt";
    char *encodedFile = "encodedFile.txt";
    char *decodedFile = "decodedFile.txt";
    char *encodedTimeFile = "encodedTimeFile.txt";
    char *decodedTimeFile = "decodedTimeFile.txt";
    int i;

    getAverageRunTime(ENCODE, inputFile, encodedFile, encodedTimeFile);
    getAverageRunTime(DECODE, encodedFile, decodedFile, decodedTimeFile);

    return 0;
}