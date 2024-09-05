





































//Time Complexity: O(2^n)
//Space Complexity: O(n)
#include <stdio.h>
#define MAX 100
int i;

void generateSubsets(int set[], int subset[], int n, int sum, int currIndex, int subsetSize) {
    if (sum == 0) {
        // Print the subset
        printf("{ ");
        for (i = 0; i < subsetSize; i++) {
            printf("%d ", subset[i]);
        }
        printf("}\n");
        return;
    }

    if (currIndex == n) {
        return;
    }
    subset[subsetSize] = set[currIndex];
    generateSubsets(set, subset, n, sum - set[currIndex], currIndex + 1, subsetSize + 1);
    generateSubsets(set, subset, n, sum, currIndex + 1, subsetSize);
}

void subsetSum(int set[], int n, int sum) {
    int subset[MAX];
    generateSubsets(set, subset, n, sum, 0, 0);
}

int main() {
    int set[] = {10, 7, 5, 18, 12, 20, 15};
    int n = sizeof(set) / sizeof(set[0]);
    int sum = 30;
    printf("Subsets with sum %d:\n", sum);
    subsetSum(set, n, sum);
    return 0;
}

