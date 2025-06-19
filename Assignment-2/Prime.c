#include<stdio.h>
#include<string.h>
void main()
{
    int a,i;
    char ya[10]="a";
    printf("Input the integer to check!\na=");
    scanf("%d",&a);
    if(a<=0){
        printf("The number is not a prime number.");
    }
    else{
        for(i=2;i*i<=a;i++)
        {
        if(a%i==0){
            strcpy(ya,"not a");
            break;
            }
        }
    printf("The number is %s prime number.",ya);
    }
}