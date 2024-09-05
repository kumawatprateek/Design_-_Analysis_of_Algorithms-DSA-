
























//Complexity: T O(n) S O(1)
#include <stdio.h>

// Non-recursive factorial function
int factorialIterative(int n) {
    int result = 1;

    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Calculate and print the factorial using iteration
    printf("Factorial of %d (iterative): %d\n", n, factorialIterative(n));

    return 0;
}

