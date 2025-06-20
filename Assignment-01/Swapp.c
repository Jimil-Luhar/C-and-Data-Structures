#include<stdio.h>
void main()
{
    int n1,n2;
    printf("Swapping two numbers.\nn1=");
    scanf("%d",&n1);
    printf("n2=");
    scanf("%d",&n2);
    printf("Before: n1=%d;n2=%d",n1,n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("\nAfter: n1=%d;n2=%d",n1,n2);
    
}2
