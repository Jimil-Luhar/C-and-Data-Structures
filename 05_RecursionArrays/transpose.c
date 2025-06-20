#include <stdio.h>
#define row 3
#define col 3
void main() {
    int matrix[row][col], transpose[col][row];
    printf("Input Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Transpose Matrix:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            transpose[i][j] = matrix[j][i];
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
