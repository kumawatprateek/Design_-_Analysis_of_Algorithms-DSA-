






















// Complexity T O(n log n) S  O(n)
#include <stdio.h>

// Function to find minimum between two numbers
int min(int num1, int num2) {
    return (num1 > num2) ? num2 : num1;
}



void printJobScheduling(char ids[], int deadlines[], int profits[], int n) {
    int jobs[n][3]; 
    for (int i = 0; i < n; i++) {
        jobs[i][0] = deadlines[i];
        jobs[i][1] = profits[i];
        jobs[i][2] = i;
    }

    int result[n]; 
    bool slot[n]; 

    for (int i = 0; i < n; i++)
        slot[i] = false;

    for (int i = 0; i < n; i++) {
        for (int j = min(n, jobs[i][0]) - 1; j >= 0; j--) {
            if (slot[j] == false) {
                result[j] = jobs[i][2]; // Add this job to result
                slot[j] = true; // Make this slot occupied
                break;
            }
        }
    }

    // Print the result
    for (int i = 0; i < n; i++)
        if (slot[i])
            printf("%c ", ids[result[i]]);
}

int main() {
    char ids[] = { 'a', 'b', 'c', 'd', 'e' };
    int deadlines[] = { 2, 1, 2, 1, 3 };
    int profits[] = { 100, 19, 27, 25, 15 };
    int n = sizeof(deadlines) / sizeof(deadlines[0]);

    printf("Following is the maximum profit sequence of jobs:\n");

    printJobScheduling(ids, deadlines, profits, n);

    return 0;
}

