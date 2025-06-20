#include <stdio.h>
void luFactorization(int n, double A[n][n], double b[n], double x[n]) {
    int i, j, k;
    double L[n][n], U[n][n], sum;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            L[i][j] = 0.0;
            U[i][j] = 0.0;
        }
    }
    for (i = 0; i < n; i++) {
        L[i][i] = 1.0;
        for (j = i; j < n; j++) {
            sum = 0.0;
            for (k = 0; k < i; k++) {
                sum += L[i][k] * U[k][j];
            }
            U[i][j] = A[i][j] - sum;
        }
        for (j = i + 1; j < n; j++) {
            sum = 0.0;
            for (k = 0; k < i; k++) {
                sum += L[j][k] * U[k][i];
            }
            L[j][i] = (A[j][i] - sum) / U[i][i];
        }
    }
    double y[n];
    for (i = 0; i < n; i++) {
        sum = 0.0;
        for (j = 0; j < i; j++) {
            sum += L[i][j] * y[j];
        }
        y[i] = (b[i] - sum) / L[i][i];
    }
    for (i = n - 1; i >= 0; i--) {
        sum = 0.0;
        for (j = i + 1; j < n; j++) {
            sum += U[i][j] * x[j];
        }
        x[i] = (y[i] - sum) / U[i][i];
    }
}
void main() {
    int n, i, j;
    printf("Enter the number of equations: ");
    scanf("%d", &n);
    double A[n][n], b[n], x[n];
    printf("Enter the augmented matrix [A|b]:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &A[i][j]);
        }
        scanf("%lf", &b[i]);
    }
    luFactorization(n, A, b, x);
    printf("Solution:\n");
    for (i = 0; i < n; i++) {
        printf("x[%d] = %lf\n", i, x[i]);
    }
}
