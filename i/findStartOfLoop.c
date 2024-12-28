#include <stdio.h>
#include <stdbool.h>
#include "findStartOfLoop.h"

void findLoopStart(int arr[], int size) {
    int visited[size]; // Array to track visited indices
    for (int i = 0; i < size; i++) {
        visited[i] = 0; // Initialize all indices as unvisited
    }

    int currentIndex = 0; // Start at index 0
    while (1) {
        // If the index has already been visited, a loop has occurred
        if (visited[currentIndex]) {
            printf("The loop starts at index [%d] with value %d\n", currentIndex, arr[currentIndex]);
            return;
        }

        // Mark the current index as visited
        visited[currentIndex] = 1;

        // Calculate the next index
        currentIndex = (currentIndex + arr[currentIndex]) % size;

        // Handle negative indices (wrap around to the end)
        if (currentIndex < 0) {
            currentIndex += size;
        }
    }
}