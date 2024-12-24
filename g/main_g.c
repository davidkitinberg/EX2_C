#include <stdio.h>
#include "SubArraySize.h"

void main_g()
{
    int array[] = {0, 1, 2, 3, 4, 5};

    // Define pointers to elements in the array
    void *start = &array[1]; // Points to array[1]
    void *end = &array[5];   // Points to array[5]

    // Calculate the subarray size
    size_t size = subarraySize(start, end);

    // Print the result
    printf("The subarray size between the two given pointers is: %zu\n", size);
}