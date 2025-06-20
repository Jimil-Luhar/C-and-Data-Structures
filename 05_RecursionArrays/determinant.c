#include <stdio.h>
#define N 3
double det(double m[N][N]) {
    double result = 0.0;
    for (int i = 0; i < N; i++) {
        int j = (i + 1) % N;
        int k = (i + 2) % N;
        result += m[0][i] * m[1][j] * m[2][k];
        result -= m[2][i] * m[1][j] * m[0][k];
    }
    return result;
}
void main() {
    double m[N][N];
    printf("Input %dx%d matrix:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lf", &m[i][j]);
        }
    }
    printf("Determinant: %.2lf\n", det(m));
}



/*#include <stdio.h>
#define N 3
double det(double m[N][N]) {
    return m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1]) -
           m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]) +
           m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);
}
void main() {
    double m[N][N];
    printf("Input %dx%d matrix:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lf", &m[i][j]);
        }
    }
    printf("Determinant:\n%.2lf", det(m));
}
*/