#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../../baseline/source/huffman.h"

void getAverageRunTime(enum mode type, char *inputFile, char *outputFile, char *timeFile) {
    
    int i;
    double sum_c_c = 0;
    double sum_t = 0;

    for(i = 0; i < 100; i++) {
        remove(outputFile);
        clock_t start, end;
        double total_c_c, total_t;
        start = clock();
        HuffmanCodes(type, inputFile, outputFile);
        end = clock();
        total_c_c = (double)(end - start);
        total_t = (double)(end - start) / CLOCKS_PER_SEC;
        sum_c_c = sum_c_c + total_c_c;
        sum_t = sum_t + total_t;
    }
    FILE *timeFilePtr = fopen(timeFile, "a");
    fprintf(timeFilePtr, "Average Clock Cycles: %f\n", sum_c_c/100);
    fprintf(timeFilePtr, "Average Time: %f\n", sum_t/100);
    fclose(timeFilePtr);
}

int main() {
    char *inputFile = "../../../input/rawText.txt";
    char *encodedFile = "clockCyclesOutput\\encodedFile.txt";
    char *decodedFile = "clockCyclesOutput\\decodedFile.txt";
    char *encodedTimeFile = "clockCyclesOutput\\averageEncodedClockCycles.txt";
    char *decodedTimeFile = "clockCyclesOutput\\averageDecodedClockCycles.txt";

    getAverageRunTime(ENCODE, inputFile, encodedFile, encodedTimeFile);
    getAverageRunTime(DECODE, encodedFile, decodedFile, decodedTimeFile);

    return 0;
}