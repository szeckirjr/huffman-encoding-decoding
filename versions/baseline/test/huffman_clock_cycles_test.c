#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../source/huffman.h"

void getAverageRunTime(enum mode type, char *inputFile, char *outputFile, char *timeFile) {
    
    int i;
    double sum = 0;

    for(i = 0; i < 500; i++) {
        remove(outputFile);
        clock_t start_t, end_t;
        double total_t;
        start_t = clock();
        HuffmanCodes(type, inputFile, outputFile);
        end_t = clock();
        total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
        sum = sum + total_t;
    }
    FILE *timeFilePtr = fopen(timeFile, "a");
    fprintf(timeFilePtr, "%f", sum/500);
    fclose(timeFilePtr);
}

int main() {
    char *inputFile = "rawText.txt";
    char *encodedFile = "clockCyclesOutput\\encodedFile.txt";
    char *decodedFile = "clockCyclesOutput\\decodedFile.txt";
    char *encodedTimeFile = "clockCyclesOutput\\encodedTime.txt";
    char *decodedTimeFile = "clockCyclesOutput\\decodedTime.txt";

    getAverageRunTime(ENCODE, inputFile, encodedFile, encodedTimeFile);
    getAverageRunTime(DECODE, encodedFile, decodedFile, decodedTimeFile);

    return 0;
}