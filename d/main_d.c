#include <stdio.h>
#include "magicMatrix.h"
#include <string.h>
#define N 3

void main_d() {

    int matrix[N][N] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };

    checkMagicMatrix((int *)matrix, N);


}