#ifndef LIGHTEST_PATH_H
#define LIGHTEST_PATH_H

#define INF 1000000   // A large value to represent infinity
#define MAX_NODES 100 // Maximum number of nodes in the graph

void findLightestPath(int graph[MAX_NODES][MAX_NODES], int n, int start, int end);

#endif