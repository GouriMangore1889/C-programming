#include <stdio.h>

// Function to solve the 0/1 Knapsack problem
int knapsack(int W, int weights[], int values[], int n) {
    int dp[n + 1][W + 1];
    int i,w;
    // Build DP table
    for (i = 0; i <= n; i++) {
        for ( w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weights[i - 1] <= w)
                dp[i][w] = (values[i - 1] + dp[i - 1][w - weights[i - 1]] > dp[i - 1][w]) 
                           ? values[i - 1] + dp[i - 1][w - weights[i - 1]] 
                           : dp[i - 1][w];
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][W];
}

int main() {
    int values[] = {60, 100, 120};  // Values of items
    int weights[] = {10, 20, 30};   // Weights of items
    int W = 50;                     // Knapsack capacity
    int n = sizeof(values) / sizeof(values[0]);

    printf("Maximum value in Knapsack = %d\n", knapsack(W, weights, values, n));
    return 0;
}
