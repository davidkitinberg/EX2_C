#include <stdio.h>
#include "canBePutTogether.h"

void main_h() {
    int arr[] = {0, 1, 2, 3, 4, 5, 10}; // Example sorted array
    int target = 10;                   // Example target
    int size = sizeof(arr) / sizeof(arr[0]);

    findTwoSumSorted(arr, size, target); // Call the function

}