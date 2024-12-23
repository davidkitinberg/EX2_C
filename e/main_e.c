#include <stdio.h>
#include "LightestPath.h"

void main()
{
    int n, start, end;
    int graph[MAX_NODES][MAX_NODES];

    printf("Enter the number of nodes in the graph (max %d): ", MAX_NODES);
    scanf("%d", &n);

    printf("Enter the adjacency matrix (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
            if (graph[i][j] == 0 && i != j)
            {
                graph[i][j] = INF; // Replace 0 with INF for non-connected nodes
            }
        }
    }

    printf("Enter the start node: ");
    scanf("%d", &start);

    printf("Enter the end node: ");
    scanf("%d", &end);

    findLightestPath(graph, n, start, end);
}