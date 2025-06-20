//Indentifies the type of the Triangle.
#include<stdio.h>
#include<math.h>
void main()
{
    int a1,a2,a3;
    printf("Input the length of your triangle:\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    (a1==a2&&a1==a3)?(printf("Triangle is Equilateral.")):
    ((a1==a2||a1==a3||a2==a3)?(printf("Triangle is Isosceles.")):
    (a1==(sqrt((a2*a2)+(a3*a3)))||a2==(sqrt((a1*a1)+(a3*a3)))||a3==(sqrt((a2*a2)+(a1*a1))))?
    (printf("Triangle is Right-angled.")):printf("The Triangle is Scalene."));
}

