#include<stdio.h>
void main()
{
    int a,n,pro;
    printf("The Multiplication Table!\n");
    printf("Integer= ");
    scanf("%d",&a);
    printf("Steps= ");
    scanf("%d",&n);
    for(pro=0;pro<=n;pro++)
    {
        printf("%d x %d = %d\n",a,pro,a*pro);
    }
    printf("Terminated!");
}