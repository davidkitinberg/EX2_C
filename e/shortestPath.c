#include <stdio.h>
#include "shortestPath.h"
#define INF 1000000 // A large value to represent infinity
#define N 4         // Adjust this for the size of the graph

void floydWarshall(int graph[N][N], int start, int end) {
    int dist[N][N]; // Distance matrix

    // Initialize the distance matrix with the input graph
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j)
                dist[i][j] = 0; // Distance to self is 0
            else if (graph[i][j] != 0)
                dist[i][j] = graph[i][j]; // Use the weight if edge exists
            else
                dist[i][j] = INF; // No edge exists
        }
    }

    // Floyd-Warshall algorithm
    for (int k = 0; k < N; k++) {          // Intermediate vertex
        for (int i = 0; i < N; i++) {      // Source vertex
            for (int j = 0; j < N; j++) {  // Destination vertex
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Output the result
    if (dist[start][end] == INF) {
        printf("No path exists from %d to %d.\n", start, end);
    } else {
        printf("The shortest path from %d to %d is: %d\n", start, end, dist[start][end]);
    }
}