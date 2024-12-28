#include <stdio.h>
#include "subArrSize.h"

int main_g() {
    int array[] = {0, 1, 2, 3, 4, 5}; // Example array
    size_t elementSize = sizeof(int); // Size of each element in the array

    // Get pointers to two elements in the array
    void *ptr1 = &array[1]; // Pointer to array[1]
    void *ptr2 = &array[5]; // Pointer to array[5]

    // Calculate the subarray size
    size_t subarraySize = calculateSubarraySize(ptr1, ptr2, elementSize);

    // Print the result
    printf("The subarray size between the two given pointers is: %zu\n", subarraySize);

    return 0;
}