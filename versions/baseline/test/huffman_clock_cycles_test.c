#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../source/huffman.h"

void getAverageRunTime(enum mode type, char *inputFile, char *outputFile, char *timeFile) {
    
    int i;
    double sum = 0;

    for(i = 0; i < 500; i++) {
        remove(outputFile);
        clock_t start, end;
        double total_c_c;
        start = clock();
        HuffmanCodes(type, inputFile, outputFile);
        end = clock();
        total_c_c = (double)(end - start);
        sum = sum + total_c_c;
    }
    FILE *timeFilePtr = fopen(timeFile, "a");
    fprintf(timeFilePtr, "%f", sum/500);
    fclose(timeFilePtr);
}

int main() {
    char *inputFile = "rawText.txt";
    char *encodedFile = "clockCyclesOutput\\encodedFile.txt";
    char *decodedFile = "clockCyclesOutput\\decodedFile.txt";
    char *encodedTimeFile = "clockCyclesOutput\\averageEncodedClockCycles.txt";
    char *decodedTimeFile = "clockCyclesOutput\\averageDecodedClockCycles.txt";

    getAverageRunTime(ENCODE, inputFile, encodedFile, encodedTimeFile);
    getAverageRunTime(DECODE, encodedFile, decodedFile, decodedTimeFile);

    return 0;
}