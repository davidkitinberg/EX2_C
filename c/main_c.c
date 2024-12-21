
#include <stdio.h>
#include <stdlib.h>  // For malloc and free
#include "matrix.h"


int main_c() {
    int n;

    // Input size of the matrix
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    // Declare the matrix
    int mat[n][n];

    // Read the matrix from the user
    printf("Enter the elements of the matrix (%dx%d):\n", n, n);
    readMatrix(n, mat);

    // Print the original matrix
    printf("The original matrix is:\n");
    printMatrix(n, mat);

    // Transpose the matrix and print the result
    printf("The transposed matrix is:\n");
    transposeMatrix(n, mat);

    return 0;
}