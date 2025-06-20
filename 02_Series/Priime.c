#include<stdio.h>
#include<string.h>
void main()
{
    int n,i;
    char ya[10]="a";
    printf("Input the integer to check!\na=");
    scanf("%d",&n);
    if(n<=1){
        strcpy(ya,"not a");
    }
    else{
        for(i=2;i<n;i++)
        {
        if(n%i==0){
            strcpy(ya,"not a");
            break;
            }
        }
    }
    printf("The number is %s prime number.",ya);
}
