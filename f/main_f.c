#include <stdio.h>
#include "Knapsack.h"

void main_f()
{
    int values[N], weights[N], sackSize, isSelected[N];

    // Input values
    printf("Enter the values of the %d items: ", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &values[i]);
    }

    // Input weights
    printf("Enter the weights of the %d items: ", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &weights[i]);
    }

    // Input sack size
    printf("Enter the size of the knapsack: ");
    scanf("%d", &sackSize);

    // Call the knapsack function
    int maxProfit = knapsack(values, weights, sackSize, isSelected);

    // Output results
    printf("The maximum profit is: %d\n", maxProfit);
    printf("Items selected (1 = selected, 0 = not selected):\n");
    for (int i = 0; i < N; i++)
    {
        printf("Item %d: %d\n", i + 1, isSelected[i]);
    }
}