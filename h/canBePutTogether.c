#include <stdio.h>
#include "canBePutTogether.h"


void findTwoSumSorted(int arr[], int size, int target) {
    int left = 0;         // Start pointer
    int right = size - 1; // End pointer

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("Number %d at index %d and number %d at index %d sum is %d as required\n",
                   arr[left], left, arr[right], right, target);
            return;
        } else if (sum < target) {
            left++;  // Increase sum by moving the left pointer forward
        } else {
            right--; // Decrease sum by moving the right pointer backward
        }
    }

    // If no such pair exists
    printf("No such numbers exist in the given array\n");
}
