





























// Complexity: T O(2^n)  S O(n)
#include <stdio.h>
// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate and print the nth Fibonacci number
    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));

    return 0;
}
