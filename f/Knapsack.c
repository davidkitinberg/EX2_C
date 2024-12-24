#include "Knapsack.h"

int knapsack(int values[], int weights[], int sackSize, int isSelected[])
{
    int dp[N + 1][sackSize + 1];

    // Initialize the DP table
    for (int i = 0; i <= N; i++)
    {
        for (int w = 0; w <= sackSize; w++)
        {
            dp[i][w] = 0;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        for (int w = 0; w <= sackSize; w++)
        {
            // Check if the current item's weight fits in the current knapsack capacity
            if (weights[i - 1] <= w)
            {
                // Calculate the two possible values:
                // 1. Including the current item
                int includeItem = values[i - 1] + dp[i - 1][w - weights[i - 1]];

                // 2. Excluding the current item
                int excludeItem = dp[i - 1][w];

                // Take the maximum of the two
                dp[i][w] = (includeItem > excludeItem) ? includeItem : excludeItem;
            }
            else
            {
                // If the current item doesn't fit, exclude it
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // Determine the items selected
    int w = sackSize;
    for (int i = N; i > 0 && w > 0; i--)
    {
        if (dp[i][w] != dp[i - 1][w])
        {
            isSelected[i - 1] = 1;
            w -= weights[i - 1];
        }
        else
        {
            isSelected[i - 1] = 0;
        }
    }

    return dp[N][sackSize]; // Maximum profit
}