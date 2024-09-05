
























// Complexity: T O(n) S O(n)
#include <stdio.h>

// Recursive factorial function
int factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorialRecursive(n - 1);
    }
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Calculate and print the factorial using recursion
    printf("Factorial of %d (recursive): %d\n", n, factorialRecursive(n));

    return 0;
}

