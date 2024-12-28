#include <stdio.h>
#include <string.h> 
#include "knapsack.h"


void main_f() {
    int values[] = {60, 100, 120, 30, 50};  // Item values
    int weights[] = {10, 20, 30, 5, 15};    // Item weights
    int sackSize = 50;                      // Maximum capacity of the knapsack
    int isSelected[5];                      // Array to track selected items

    // Solve the knapsack problem
    int maxValue = knapsack(values, weights, sackSize, isSelected);

    // Print the results
    printf("Maximum Value: %d\n", maxValue);
    printf("Selected Items: ");
    for (int i = 0; i < 5; i++) {
        if (isSelected[i]) {
            printf("%d ", i + 1);  // Print 1-based index of selected items
        }
    }
    printf("\n");


}