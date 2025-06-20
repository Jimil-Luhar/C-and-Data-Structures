#include<stdio.h>
void main()
{
    int i,v;
    int a[5]={1,2,3,4,5};
    int b[5]={1,2,3,4,5};

    for(int o=0;o<5;o++)
        printf("%d ",a[o]);
    printf("\nIndex to be changed & Value to be added.\n");
    printf("Index & Value: \n");
    scanf("%d%d",&i,&v);
    a[i]=v;
    for(int m=i;m<6;m++){
        a[m+1]=b[m];        
    }
    for(int k=0;k<6;k++){
        printf("%d ",a[k]);
    }
}