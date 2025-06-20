#include<stdio.h>
void main()
{
    float x,sum=1;
    printf("Input x:");
    scanf("%f",&x);
    for (int i = 100; i > 0; i--) {
        sum = 1.0 + x * sum / i;
    }
    printf("e^x = %f", sum);
}