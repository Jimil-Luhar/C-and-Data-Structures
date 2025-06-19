//Triangular series.
#include<stdio.h>
void main()
{
    int a1=1,n,last;
    printf("The Triangular Series!\nUpto:");
    scanf("%d",&last);
    for(n=2;n<=last;n++)
    {
        printf("%d\n",a1);
        a1=a1+n;
    }
}