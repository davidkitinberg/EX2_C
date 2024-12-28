#include <stdio.h>
#include <stdbool.h>
#include "subArrIndexes.h"

bool isSubsequence(int A[], int sizeA, int B[], int sizeB) {
    int i = 0, j = 0;

    // Traverse both arrays
    while (i < sizeA && j < sizeB) {
        if (A[i] == B[j]) {
            j++; // Move pointer in B if there's a match
        }
        i++; // Always move pointer in A
    }

    // If we have matched all elements of B, return true
    return j == sizeB;
}