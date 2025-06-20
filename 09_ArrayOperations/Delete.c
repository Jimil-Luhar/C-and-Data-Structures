#include<stdio.h>
void main(){
    int i,v;
    int a[5]={1,2,3,4,5};
    int b[5]={1,2,3,4,5};
    for(int o=0;o<5;o++)
        printf("%d ",a[o]);
    printf("\nIndex to be deleted: ");
    scanf("%d",&i);
    for(int m=i;m<6;m++)
        a[m]=b[m+1];        
    for(int k=0;k<4;k++)
        printf("%d ",a[k]);
}