#include <stdio.h>
#include <stdbool.h>
#include "magicMatrix.h"


void checkMagicMatrix(int *matrix, int size) {
    int magicSum = 0;

    // Calculate the sum of the first row
    for (int j = 0; j < size; j++) {
        magicSum += *(matrix + j);
    }

    // Check the sum of each row
    for (int i = 0; i < size; i++) {
        int rowSum = 0;
        for (int j = 0; j < size; j++) {
            rowSum += *(matrix + i * size + j);
        }
        if (rowSum != magicSum) {
            printf("The given Matrix is not a magic Matrix\n");
            return;
        }
    }

    // Check the sum of each column
    for (int j = 0; j < size; j++) {
        int colSum = 0;
        for (int i = 0; i < size; i++) {
            colSum += *(matrix + i * size + j);
        }
        if (colSum != magicSum) {
            printf("The given Matrix is not a magic Matrix\n");
            return;
        }
    }

    // Check the sum of the main diagonal
    int mainDiagSum = 0;
    for (int i = 0; i < size; i++) {
        mainDiagSum += *(matrix + i * size + i);
    }
    if (mainDiagSum != magicSum) {
        printf("The given Matrix is not a magic Matrix\n");
        return;
    }

    // Check the sum of the secondary diagonal
    int secDiagSum = 0;
    for (int i = 0; i < size; i++) {
        secDiagSum += *(matrix + i * size + (size - i - 1));
    }
    if (secDiagSum != magicSum) {
        printf("The given Matrix is not a magic Matrix\n");
        return;
    }

    // If all checks passed, it's a magic matrix
    printf("The given Matrix is a magic Matrix with sum of %d\n", magicSum);
}
