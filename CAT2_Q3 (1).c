/*
NAME:JEZRYL LUMBASI 
REG NO:CT101/G/26464/25
DATE:6/11/2025
DESCRIPTION:CAT 2 QUESTION 3
*/
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void writeIntegersToFile();
void processIntegers();
void displayFiles();

int main() {
    writeIntegersToFile();
    processIntegers();
    displayFiles();
    return 0;
}

// 1. Function to input 10 integers and store them in "input.txt"
void writeIntegersToFile() {
    FILE *fptr;
    int numbers[10];

    fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        printf("Error: Could not create input.txt\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(fptr, "%d\n", numbers[i]);
    }

    fclose(fptr);
    printf("\nData successfully written to input.txt\n\n");
}

// 2. Function to read integers, calculate sum and average, and write to "output.txt"
void processIntegers() {
    FILE *fin, *fout;
    int num, sum = 0, count = 0;
    float avg;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt for reading\n");
        exit(1);
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(fin);
        exit(1);
    }

    while (fscanf(fin, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;

    fprintf(fout, "Sum = %d\nAverage = %.2f\n", sum, avg);

    fclose(fin);
    fclose(fout);

    printf("Processing complete. Results written to output.txt\n\n");
}

// 3. Function to read and display contents of both files
void displayFiles() {
    FILE *fptr;
    char ch;

    printf("----- Contents of input.txt -----\n");
    fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open input.txt\n");
        exit(1);
    }

    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);

    printf("\n----- Contents of output.txt -----\n");
    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open output.txt\n");
        exit(1);
    }

    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);
}