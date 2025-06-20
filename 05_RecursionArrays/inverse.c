#include <stdio.h>
float det2x2(float a[2][2]) {
    return a[0][0] * a[1][1] - a[0][1] * a[1][0];
}
float det(float a[3][3]) {
    return a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) -
           a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) +
           a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
}
void inverse(float a[3][3], float inv[3][3]) {   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            float b[2][2];
            int x = 0, y = 0;
            for (int m = 0; m < 3; m++) {
                for (int n = 0; n < 3; n++) {
                    if (m != i && n != j)
                        b[x][y] = a[m][n],y += 1;
                        if (y > 1) 
                            y = 0,x += 1;
                }
            }
            inv[j][i] = ((i + j) % 2 ? -1 : 1) * det2x2(b)/det(a);
        }
    }
}
void main() {
    float matrix[3][3], inv[3][3];
    printf("Input 3*3 Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
    inverse(matrix, inv);
    printf("Inverse Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %.1f", inv[i][j]);
        }
        printf("\n");
    }
}





/*#include <stdio.h>
#include <math.h>

#define N 25 // Maximum matrix size, you can change it if needed

// Function to calculate the determinant of a matrix
float determinant(float a[N][N], int k) {
    float s = 1, det = 0, b[N][N];
    int i, j, m, n, c;
    if (k == 1) {
        return (a[0][0]);
    } else {
        det = 0;
        for (c = 0; c < k; c++) {
            m = 0;
            n = 0;
            for (i = 0; i < k; i++) {
                for (j = 0; j < k; j++) {
                    b[i][j] = 0;
                    if (i != 0 && j != c) {
                        b[m][n] = a[i][j];
                        if (n < (k - 2))
                            n++;
                        else {
                            n = 0;
                            m++;
                        }
                    }
                }
            }
            det = det + s * (a[0][c] * determinant(b, k - 1));
            s = -1 * s;
        }
    }
    return (det);
}

// Function to calculate the cofactor of a matrix
void cofactor(float num[N][N], int f, float fac[N][N]) {
    float b[N][N];
    int p, q, m, n, i, j;
    for (q = 0; q < f; q++) {
        for (p = 0; p < f; p++) {
            m = 0;
            n = 0;
            for (i = 0; i < f; i++) {
                for (j = 0; j < f; j++) {
                    if (i != q && j != p) {
                        b[m][n] = num[i][j];
                        if (n < (f - 2))
                            n++;
                        else {
                            n = 0;
                            m++;
                        }
                    }
                }
            }
            fac[q][p] = pow(-1, q + p) * determinant(b, f - 1);
        }
    }
}

// Function to calculate the transpose of a matrix
void transpose(float num[N][N], int r, float fac[N][N]) {
    int i, j;
    float b[N][N], inverse[N][N], d;
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            b[i][j] = fac[j][i];
        }
    }
    d = determinant(num, r);
    printf("\n\nThe inverse of the matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            float value = b[i][j] / d;
            if (value == 0) {
                value = 0; // Set zero to exactly 0
            }
            printf("\t%f", value);
        }
        printf("\n");
    }
}


int main() {
    float a[N][N], k, d;
    int i, j;
    printf("Enter the order of the Matrix: ");
    scanf("%f", &k);
    printf("Enter the elements of %.0fX%.0f Matrix:\n", k, k);
    for (i = 0; i < k; i++) {
        for (j = 0; j < k; j++) {
            scanf("%f", &a[i][j]);
        }
    }
    d = determinant(a, k);
    if (d == 0) {
        printf("\nInverse of the Entered Matrix is not possible\n");
    } else {
        float cof[N][N];
        cofactor(a, k, cof);
        transpose(a, k, cof);
    }
    return 0;
}
*/