#include "Jumper.h"

int findLoopStart(int array[], int size)
{
    int slow = 0, fast = 0;

    // Step 1: Detect if a loop exists using two pointers (slow and fast)
    do
    {
        slow = (slow + array[slow]) % size; // Slow pointer moves one step
        fast = (fast + array[fast]) % size; // Fast pointer moves two steps
        fast = (fast + array[fast]) % size;
    } while (slow != fast);

    // Step 2: Locate the start of the loop
    int start = 0;
    while (start != slow)
    {
        start = (start + array[start]) % size; // Move both pointers one step at a time
        slow = (slow + array[slow]) % size;
    }

    return array[start]; // Return the value at the starting index of the loop
}