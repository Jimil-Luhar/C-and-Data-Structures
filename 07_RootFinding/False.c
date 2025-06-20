#include <stdio.h>
#include <math.h>
double funct(double x);
double falsePosition(double a, double b, double error);

int main() {
    double a, b, error, Ans;
    char eq[30]="(x*x*x)-x-2;";
    printf("For the equation: %s\n",eq);
    printf("Input Lower Limit, Upper Limit, Tolerable Error: \n");
    scanf("%lf%lf%lf", &a, &b, &error);

    Ans = falsePosition(a, b, error);
    printf("Root: %lf", Ans);
    return 0;
}

double funct(double x) {
    //return (x-4)*(x-4)*(x+2);
    return (x*x*x)-x-2;
}

double falsePosition(double a, double b, double error) {
    double c;
    do {
        c = (a * funct(b) - b * funct(a)) / (funct(b) - funct(a));
        if (funct(c) == 0.0)
            break;
        else if (funct(c) * funct(a) < 0)
            b = c;
        else
            a = c;
    } 
    while (fabs(funct(c)) > error);
    return c;
}