
























// Complexity Analysis  T O(n) S O(1)
#include <stdio.h>

// Function to find the minimum number of coins needed for change
void findMinCoins(int coins[], int n, int amount) {
    int count = 0;

    printf("Selected coins: ");

    // Start with the largest coin
    for (int i = n - 1; i >= 0; i--) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            printf("%d ", coins[i]);
            count++;
        }
    }

    printf("\nMinimum number of coins: %d\n", count);
}

int main() {
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    int amount;

    printf("Enter the amount for which you want to make change: ");
    scanf("%d", &amount);

    findMinCoins(coins, numCoins, amount);

    return 0;
}

