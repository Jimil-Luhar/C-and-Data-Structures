#include <stdio.h>

#define N 3 // Define the size of the matrix

// Function to perform Gaussian elimination
void gaussianElimination(double matrix[N][N * 2]) {
    int i, j, k;
    double pivot, factor;

    for (i = 0; i < N; i++) {
        // Make the diagonal element 1
        pivot = matrix[i][i];
        for (j = i; j < 2 * N; j++) {
            matrix[i][j] /= pivot;
        }

        // Eliminate other elements in the current column
        for (j = 0; j < N; j++) {
            if (j != i) {
                factor = matrix[j][i];
                for (k = i; k < 2 * N; k++) {
                    matrix[j][k] -= factor * matrix[i][k];
                }
            }
        }
    }
}

int main() {
    double matrix[N][N * 2]; // Augmented matrix [A | I] where A is the original matrix, and I is the identity matrix
    int i, j;

    // Initialize the matrix with the given values
    double initialMatrix[N][N] = {
        {25, 5, 1},
        {64, 8, 1},
        {144, 12, 1}
    };

    printf("Original matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%.6lf\t", initialMatrix[i][j]);
        }
        printf("\n");
    }

    // Copy the initial matrix into the left part of the augmented matrix [A | I]
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrix[i][j] = initialMatrix[i][j];
        }
    }

    // Initialize the right part of the augmented matrix with the identity matrix
    for (i = 0; i < N; i++) {
        for (j = N; j < 2 * N; j++) {
            if (i == (j - N)) {
                matrix[i][j] = 1.0;
            } else {
                matrix[i][j] = 0.0;
            }
        }
    }

    // Perform Gaussian elimination
    gaussianElimination(matrix);

    // Output the inverse matrix
    printf("Inverse matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = N; j < 2 * N; j++) {
            printf("%.6lf\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


