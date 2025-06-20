//Simple-interest calculator
#include<stdio.h>
void main()
{
    int years;
    float rate,amount,interest;
    printf("Simple Interest Calculator!\n");
    printf("Input in order of P.Amount, Interest Rate, Years\n");
    scanf("%f%f%d",&amount,&rate,&years);
    interest=(amount*years*rate)/100;
    printf("\nThe Current Amt: %f",interest+amount);
}