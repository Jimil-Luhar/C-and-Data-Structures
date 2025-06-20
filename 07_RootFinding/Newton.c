#include<stdio.h>
#include<math.h>
double funct(double x);
double derivative(double x);
double newton(double x0,double Es);

void main()
{
    double x0,Es;
    char eq[30]="(x*x*x)-x-2;";
    printf("For the equation: %s",eq);
    printf("\nInput the Initial guess & Error:\n");
    scanf("%lf%lf",&x0,&Es);

    double Ans= newton(x0,Es);
    printf("Root: %lf\n",Ans);
}

double funct(double x){
    //return (x*x*x)-0.165*(x*x)+0.0003993;
    return (x*x*x)-x-2;
}
double derivative(double x){
    return 3*(x*x)-1;
    //return 3*(x*x)-0.33*x;
}

double newton(double x0,double Es){
    double x1;
    do{
        x1=x0-funct(x0)/derivative(x0);
        x0=x1;
    } while(fabs((x1-x0)/x1)*100 > Es);
    return x1;
}
