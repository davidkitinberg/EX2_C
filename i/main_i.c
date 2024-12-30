#include <stdio.h>
#include "Jumper.h"

void main_i()
{
    int size;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid array size.\n");
        return;
    }

    int array[size];

    // Input array elements
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Find the value where the loop starts
    int loopValue = findLoopStart(array, size);

    // Print the result
    printf("The loop starts at the value: %d\n", loopValue);
}