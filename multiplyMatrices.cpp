

























// Complexity Analysis  T  Multiplication Operation: O(N^3) S- Total Space: O(N^2) Auxiliary Space: O(1)
#include <stdio.h>

#define N 3

void multiplyMatrices(int firstMatrix[][N], int secondMatrix[][N], int result[][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < N; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[N][N] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int secondMatrix[N][N] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int resultMatrix[N][N];

    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix);

    printf("First Matrix:\n");
    displayMatrix(firstMatrix);

    printf("\nSecond Matrix:\n");
    displayMatrix(secondMatrix);

    printf("\nResult Matrix:\n");
    displayMatrix(resultMatrix);

    return 0;
}

