//Roots of Quadratic Equations!
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float dis,s1,s2,img,rel;
    printf("Enter the coeff's of your Quadratic Equation!\n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    printf("c= ");
    scanf("%d",&c);
    
    dis=((b*b)-4*a*c);
    (dis > 0)?((s1=((-b + sqrt(dis))/(2*a))),(s2=((-b - sqrt(dis))/(2*a))),printf("ROOTS: %f and %f",s1,s2)):
    ((dis==0)?((s1=((-b)/(2*a))),printf("ROOTS: %f and %f",s1,s1)):
    ((rel=((-b)/(2*a))),(img=(sqrt(dis)/(2*a))),printf("ROOTS:\n%f+(%f)i\n%f-(%f)i",rel,img,rel,img)));
    
return 0;
}
