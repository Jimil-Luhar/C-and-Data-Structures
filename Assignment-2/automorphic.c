#include<stdio.h>
void main()
{
    int num,orig,sq,lastdigits=1,i;
    printf("Input a number: ");
    scanf("%d",&num);

    sq=num*num;
    orig=num;
    while(orig!=0)
    {
        lastdigits*=10;
        orig/=10; 
    }

    (sq % lastdigits == num)?(printf("Automorphic!\n")):(printf("Not-Automorphic!\n"));
}