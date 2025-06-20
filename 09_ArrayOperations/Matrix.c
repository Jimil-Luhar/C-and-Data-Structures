#include<stdio.h>
void main(){
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,0,1,2},{3,4,5,6}};
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    int product=1,sum=0,Usum=0;
    for(int i=0;i<4;i++)
        product*=a[i][i];
    for(int i=0;i<4;i++)
        sum+=a[i][i];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        if(j>i)
            Usum+=a[i][j];
        }
    }
    printf("a)Diagonal Sum:%d\nb)Diagonal Product:%d\n",sum,product);
    printf("c)Upper Triangle Sum:%d",Usum);
}