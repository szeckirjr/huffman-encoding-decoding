#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../source/huffman.h"

void getAverageRunTime(enum mode type, char *inputFile, char *outputFile, char *timeFile) {
    
    int i;
    double sum_c_t = 0;
    double sum_t = 0;

    for(i = 0; i < 500; i++) {
        remove(outputFile);
        clock_t start, end;
        double total_c_t, total_t;
        start = clock();
        HuffmanCodes(type, inputFile, outputFile);
        end = clock();
        total_c_t = (double)(end - start);
        total_t = (double)(end - start) / CLOCKS_PER_SEC;
        sum_c_t = sum_c_t + total_c_t;
        sum_t = sum_t + total_t;
    }
    FILE *timeFilePtr = fopen(timeFile, "a");
    fprintf(timeFilePtr, "Average Clock Ticks: %f\n", sum_c_t/500);
    fprintf(timeFilePtr, "Average Time: %f\n", sum_t/500);
    fclose(timeFilePtr);
}

int main() {
    char *inputFile = "../../../input/rawText.txt";
    char *encodedFile = "timeOutput/encodedFile.txt";
    char *decodedFile = "timeOutput/decodedFile.txt";
    char *encodedTimeFile = "timeOutput/averageEncodedTime.txt";
    char *decodedTimeFile = "timeOutput/averageDecodedTime.txt";

    getAverageRunTime(ENCODE, inputFile, encodedFile, encodedTimeFile);
    getAverageRunTime(DECODE, encodedFile, decodedFile, decodedTimeFile);

    return 0;
}