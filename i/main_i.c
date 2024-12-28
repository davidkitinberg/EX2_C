#include <stdio.h>
#include <stdbool.h>
#include "findStartOfLoop.h"


int main_i() {
    int arr[] = {3, 2, 0, -1}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    findLoopStart(arr, size); // Call the function
    return 0;
}