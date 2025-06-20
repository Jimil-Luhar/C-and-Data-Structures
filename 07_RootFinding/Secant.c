// a=10,b=30,i=5: root=24.738.
#include <stdio.h>
#include <math.h>

double funct(double x);
double secant(double a, double b, int i);

int main() {
    int i;
    double a, b, ans;
    printf("Input a, b, and i:\n");
    scanf("%lf %lf %d", &a, &b, &i);
    ans = secant(a, b, i);
    printf("Root: %lf\n", ans);
    return 0;
}

double funct(double x) {
    return (x*x*x)-x-2;
    //return x * x - 612;
}

double secant(double a, double b, int i) {
    double c;
    for (int p = 0; p < i; p++) {
        c = b - (funct(b) * (b - a)) / (funct(b) - funct(a));
        if (fabs(funct(c)) < 1e-6) {
            break;
        }
        a = b;
        b = c;
    }
    return c;
}
