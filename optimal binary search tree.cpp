#include<stdio.h>
#include<limits.h>
double sumProbabilities(double probabilities[], int start, int end) {
    double sum = 0.0;
    for (int i=start;i<=end;i++)
        sum += probabilities[i];
    return sum;
}
double optimalBSTCost(double keys[], double probabilities[], int n) {
    double dp[n][n];
    for (int i = 0; i < n; i++)
        dp[i][i] = probabilities[i];
    for (int L = 2; L <= n; L++) {
        for (int i = 0; i <= n - L + 1; i++) {
            int j = i + L - 1;
            dp[i][j] = INT_MAX;
            for (int r = i; r <= j; r++) {
                double cost = ((r > i) ? dp[i][r - 1] : 0) + ((r < j) ? dp[r + 1][j] : 0) + sumProbabilities(probabilities, i, j);
                if (cost < dp[i][j])
                    dp[i][j] = cost;
            }
        }
    }
    return dp[0][n - 1];
}
int main() 
{
    int n;
    printf("Enter the number of keys: ");
    scanf("%d", &n);
    double keys[n], probabilities[n];
    printf("Enter the keys and their probabilities:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &keys[i], &probabilities[i]);
    }
    double cost = optimalBSTCost(keys, probabilities, n);
    printf("Optimal BST cost: %lf\n", cost);
    return 0;
}


