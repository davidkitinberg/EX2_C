#include <stdio.h>
#include <string.h>  // For memset
#include "knapsack.h"

int knapsack(int values[], int weights[], int sackSize, int isSelected[]) {
    int n = 5;  // Number of items (defined as 5 in the problem)
    int dp[n + 1][sackSize + 1];  // DP table to store maximum values
    int selected[n];  // Temporary array to track selected items

    // Initialize DP table and selected array to zero
    memset(dp, 0, sizeof(dp));
    memset(selected, 0, sizeof(selected));

    // Fill the DP table
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= sackSize; w++) {
            int currentWeight = weights[i - 1];
            int currentValue = values[i - 1];

            if (currentWeight <= w) {
                // Check if including the current item gives a better value
                int includeCurrentItem = currentValue + dp[i - 1][w - currentWeight];
                int excludeCurrentItem = dp[i - 1][w];

                dp[i][w] = (includeCurrentItem > excludeCurrentItem) 
                            ? includeCurrentItem 
                            : excludeCurrentItem;
            } else {
                // Can't include the current item due to weight
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // Backtrack to find which items were selected
    int remainingCapacity = sackSize;
    for (int i = n; i > 0; i--) {
        if (dp[i][remainingCapacity] != dp[i - 1][remainingCapacity]) {
            selected[i - 1] = 1;  // Mark the item as selected
            remainingCapacity -= weights[i - 1];  // Reduce the remaining capacity
        }
    }

    // Copy selected items to isSelected array
    for (int i = 0; i < n; i++) {
        isSelected[i] = selected[i];
    }

    // Return the maximum value
    return dp[n][sackSize];
}