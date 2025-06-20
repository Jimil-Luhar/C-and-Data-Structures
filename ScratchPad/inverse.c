#include <stdio.h>
#include <stdlib.h>

#define N 3 // Change this to the size of your square matrix

void printMatrix(double A[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%f     ", A[i][j]);
        }
        printf("\n");
    }
}

// Perform LU decomposition with partial pivoting
void luDecomposition(double A[N][N], double L[N][N], double U[N][N], int P[N]) {
    for (int i = 0; i < N; i++) {
        P[i] = i;
    }

    for  (int i = 0; i < N; i++) {
        double max = 0.0;
        int maxIndex = i;

        for (int k = i; k < N; k++) {
            if (abs(A[k][i]) > max) {
                max = abs(A[k][i]);
                maxIndex = k;
            }
        }

        if (maxIndex != i) {
            // Swap rows in A
            for (int j = 0; j < N; j++) {
                double temp = A[i][j];
                A[i][j] = A[maxIndex][j];
                A[maxIndex][j] = temp;
            }

            // Swap rows in P
            int temp = P[i];
            P[i] = P[maxIndex];
            P[maxIndex] = temp;
        }

        for (int j = i; j < N; j++) {
            U[i][j] = A[i][j];
            for (int k = 0; k < i; k++) {
                U[i][j] -= L[i][k] * U[k][j];
            }
        }

        for (int j = i + 1; j < N; j++) {
            L[j][i] = A[j][i];
            for (int k = 0; k < i; k++) {
                L[j][i] -= L[j][k] * U[k][i];
            }
            L[j][i] /= U[i][i];
        }
    }
}

// Solve linear equations to find the inverse
void findInverse(double L[N][N], double U[N][N], int P[N], double inv[N][N]) {
    double B[N][N] = {0};

    for (int i = 0; i < N; i++) {
        B[i][P[i]] = 1.0;

        // Forward substitution to solve Ly = Pb
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < N; k++) {
                B[i][k] -= L[i][j] * B[j][k];
            }
        }
    }

    for (int i = N - 1; i >= 0; i--) {
        // Backward substitution to solve Ux = y
        for (int k = 0; k < N; k++) {
            B[i][k] /= U[i][i];
        }

        for (int j = 0; j < i; j++) {
            for (int k = 0; k < N; k++) {
                B[j][k] -= B[i][k] * U[j][i];
            }
        }
    }

    // Copy the result to the inverse matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            inv[i][j] = B[i][j];
        }
    }
}

int main() {
    double A[N][N] = {{25, 5, 1},{64, 8, 1},{144, 12, 1}};
    double L[N][N], U[N][N], inv[N][N];
    int P[N];

    // Perform LU decomposition
    luDecomposition(A, L, U, P);

    // Find the inverse using LU decomposition
    findInverse(L, U, P, inv);

    printf("\nInverse Matrix:\n");
    printMatrix(inv);

    return 0;
}
