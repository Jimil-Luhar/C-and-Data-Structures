#include <stdio.h>
#define row 3
#define col 3
void main() {
    int matrix1[row][col], matrix2[row][col], result[row][col];
    printf("Input Matrix1:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Input Matrix2:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Product Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}


/*

//Full functional matrix multiplier program by JIMIL.
#include<stdio.h>
void main(){
    int col1, row1, col2, row2;
    printf("Input Row and Column for Matrix1: \n");
    scanf("%d %d",&row1, &col1);
    printf("Input Row and Column for Matrix1: \n");
    scanf("%d %d",&row2, &col2);
    int mat1[row1][col1], mat2[row2][col2], ans[row1][col2];
    if(col1!=row2){
    printf("Invalid Input.");
    }
    else{
        printf("Input Matrix A\n");
        for (int m=0;m<row1;m++){
            for (int n=0;n<col1;n++){
                scanf("%d",&mat1[m][n]);
            }
        }

        printf("Input Matrix B\n");
        for (int o=0;o<row2;o++){
            for (int p=0;p<col2;p++){
                scanf("%d",&mat2[o][p]);
            }
        }
    
        printf("Product :\n");
        for(int r=0;r<row1;r++){
            for(int c=0;c<col2;c++){
                ans[r][c]=0;
                for(int i=0;i<row2;i++){
                    ans[r][c] += mat1[r][i]*mat2[i][c]; 
                }
                printf("%d ",ans[r][c]);
            }
            printf("\n");
        }
    }
}
*/