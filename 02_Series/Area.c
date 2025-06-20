#include<stdio.h>
void main()
{
 float pi=3.14159265359,r;
 printf("The Circle Parameters Calculator!\nradius:");
 scanf("%f",&r);
 printf("Area:%f\nCircumference:%f\nDiameter:%f",pi*r*r,2*pi*r,2*r);   
}
