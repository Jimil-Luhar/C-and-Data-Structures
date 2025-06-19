#include<stdio.h>
void main()
{
    float n1,n2,n3,nth,last;
    printf("Fibbonaci Sequence\nupto:");
    scanf("%f",&last);
    n1=0;n2=1;
    printf("%f\n",n1);
    printf("%f\n",n2);
    for(nth=2;nth<=last;nth++)
    {
        n3=n1+n2;
        printf("%f\n",n3);
        n1=n2;
        n2=n3;
    }
    printf("Terminated!");
} 