/*
NAME:JEZRYL LUMBASI 
REG NO:CT101/G/26464/25
DATE:6/11/2025
DESCRIPTION:CAT 2 QUESTION 1
*/
#include <stdio.h>

int main() {
    // i. Definition of an array data structure:
    // An array is a data structure that stores a fixed-size sequence
    // of elements of the same data type in contiguous memory locations.
    // Each element can be accessed using an index.

    // ii. Declare and initialize a 2D array named 'scores' with 2 rows and 2 columns
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    // iii. Print the elements of the above array using a nested for loop
    printf("The elements of the array are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // move to the next line after each row
    }

    return 0;
}