#include <stdio.h>
#include "Ex8.h"

void main_h()
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

    // Input the target number
    int target;
    printf("Enter the target number: ");
    scanf("%d", &target);

    // Check if two numbers in the array sum to the target
    if (checkArrayForSum(array, size, target))
    {
        printf("There are two numbers in the array that sum up to %d.\n", target);
    }
    else
    {
        printf("No two numbers in the array sum up to %d.\n", target);
    }
}