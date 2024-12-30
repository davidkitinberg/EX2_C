#include "Ex8.h"

bool checkArrayForSum(int array[], int size, int target)
{
    // Loop through all pairs of numbers in the array
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == target)
            {
                return true; // Found a pair that sums to the target
            }
        }
    }
    return false; // No such pair found
}