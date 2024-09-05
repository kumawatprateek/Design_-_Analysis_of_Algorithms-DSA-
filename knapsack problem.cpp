


























// Complexity:  T o(n) s O(n)
#include <stdio.h>

// Function to find the maximum value that can be obtained
double fractionalKnapsack(int W, int values[], int weights[], int n) {
    int items[n][2]; 

    for (int i = 0; i < n; i++) {
        items[i][0] = values[i];
        items[i][1] = weights[i];
    }

    double totalValue = 0.0;

    for (int i = 0; i < n; i++) {
        if (W >= items[i][1]) {
            totalValue += items[i][0];
            W -= items[i][1];
        } else {
            totalValue += (double)items[i][0] / items[i][1] * W;
            break;
        }
    }

    return totalValue;
}

int main() {
    int values[] = {10, 10, 120};
    int weights[] = {10, 20, 30};
    int n = sizeof(values) / sizeof(values[0]);
    int W = 50;

    double result = fractionalKnapsack(W, values, weights, n);

    printf("Maximum value in knapsack: %.3f\n", result);

    return 0;
}

