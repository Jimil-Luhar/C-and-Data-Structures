#include<stdio.h>
double funct(double x);
double bisection(double a, double b, int iterations);

int main(){
    double a,b,Ans;
    int iterations;
    printf("Input Lower Limit, Upper Limit, Iterations:\n");
    scanf("%lf%lf%d",&a,&b,&iterations);
    Ans=bisection(a,b,iterations);
    printf("Root:%lf",Ans);
    return 0;
}

double funct(double x){
    return (x*x*x)-x-2;
}

double bisection(double a, double b,int iterations){
    double c;
    for(int i=0;i<=iterations;i++) {
        c = (a + b) / 2;
        if (funct(c) == 0)
            break;
        else if (funct(c) * funct(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}
