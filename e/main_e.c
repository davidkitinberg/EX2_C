
#include <stdio.h>
#include "shortestPath.h"
#define INF 1000000 // A large value to represent infinity
#define N 4         // Adjust this for the size of the graph


void main_e() {
    int graph[N][N] = {
        {0, 3, INF, 7},
        {8, 0, 2, INF},
        {5, INF, 0, 1},
        {2, INF, INF, 0}
    };

    int start = 0, end = 2;
    floydWarshall(graph, start, end);

    
}