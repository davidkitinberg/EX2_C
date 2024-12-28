#include <stdio.h>
#include <stdbool.h>
#include "subArrIndexes.h"


int main_j() {
    int A[] = {0, 1, 2, 3, 4, 5, 6}; // Example array A
    int B[] = {3, 4, 5};            // Example array B
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    if (isSubsequence(A, sizeA, B, sizeB)) {
        printf("All elements of B appear in A in the correct order.\n");
    } else {
        printf("B does not appear in A in the correct order.\n");
    }

    return 0;
}