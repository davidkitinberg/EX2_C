#include <stdio.h>
#include "LightestPath.h"

void findLightestPath(int graph[MAX_NODES][MAX_NODES], int n, int start, int end)
{
    int dist[MAX_NODES][MAX_NODES];
    int i, j, k;

    // Initialize distance matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            dist[i][j] = graph[i][j];
        }
    }

    // Floyd-Warshall algorithm
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Print the shortest distance
    if (dist[start][end] >= INF)
    {
        printf("No path exists between node %d and node %d.\n", start, end);
    }
    else
    {
        printf("The shortest path from node %d to node %d is %d.\n", start, end, dist[start][end]);
    }
}