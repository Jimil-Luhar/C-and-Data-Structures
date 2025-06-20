#include<stdio.h>
void main()
{
    int a,b,i,l;
    printf("Input positive values of two integers:\n");
    scanf("%d%d",&a,&b);

    l=(a>b)?a:b;
    for(i=l;;l++)
    {
        if(l%a==0 && l%b==0)
        {
            printf("LCM:%d",l);
            break;
        }
    }
    printf("\nHCF:%d",a*b/l);
}