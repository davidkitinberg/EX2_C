#include <stdio.h>
#include "magicMatrix.h"

int main_d()
{
    int size;

    // Input the size of the matrix
    printf("Enter the size of the square matrix (e.g., 3 for 3x3): ");
    scanf("%d", &size);

    int matrix[size][size];

    // Input the elements of the matrix
    printf("Enter the elements of the matrix row by row:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is a magic square
    checkMagicMatrix((int *)matrix, size);

    return 0;
}