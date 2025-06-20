//Base-Power Series.
#include<stdio.h>
#include<math.h>
void main()
{
    int n,last;
    printf("Upto:");
    scanf("%d",&last);
    for(n=1;n<=last;n++)
    {
        printf("%d\n",(int)pow(n,n));
    }
}