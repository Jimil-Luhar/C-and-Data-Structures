#include <stdio.h>

void gaussElimination(int n, double A[n][n], double b[n], double x[n]) {
    int i, j, k;
    double factor, sum;

    // Forward elimination
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            factor = A[j][i] / A[i][i];
            for (k = i; k < n; k++) {
                A[j][k] -= factor * A[i][k];
            }
            b[j] -= factor * b[i];
        }
    }

    // Backward substitution
    for (i = n - 1; i >= 0; i--) {
        sum = 0.0;
        for (j = i + 1; j < n; j++) {
            sum += A[i][j] * x[j];
        }
        x[i] = (b[i] - sum) / A[i][i];
    }
}

int main() {
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

    gaussElimination(n, A, b, x);

    printf("Solution:\n");
    for (i = 0; i < n; i++) {
        printf("x[%d] = %lf\n", i, x[i]);
    }

    return 0;
}


