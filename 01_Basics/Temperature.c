#include<stdio.h>
void main()
{
    float c,f;
    printf("Input your Temperature in Celsius!");
    printf("\nC= ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in Farenheit: %f",f);
}