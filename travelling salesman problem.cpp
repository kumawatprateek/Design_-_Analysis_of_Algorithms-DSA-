

























// Complexity  T O(n!) S O(n) 
#include <stdio.h>

#define N 4 // Number of cities

int graph[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

int min(int a, int b) {
    return (a < b) ? a : b;
}

int tsp(int mask, int pos) {
    if (mask == (1 << N) - 1) {
        return graph[pos][0]; // Return to the starting city
    }

    int minCost = 100000000007;

    for (int city = 0; city < N; ++city) {
        if (!(mask & (1 << city))) { // If city not visited
            int newMask = mask | (1 << city);
            int cost = graph[pos][city] + tsp(newMask, city);
            minCost = min(minCost, cost);
        }
    }

    return minCost;
}

int main() {
    int startingCity = 0; 
    int mask = 1;
    int minCost = tsp(mask, startingCity);

    printf("Minimum cost: %d\n", minCost);

    return 0;
}

