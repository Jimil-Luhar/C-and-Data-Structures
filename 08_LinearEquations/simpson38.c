#include <stdio.h>
#include <math.h>
double f(double x) {
    return (x * x * x) + 1;
}
double simp(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 3 == 0) 
            sum += 2 * f(x);
        else
            sum += 3 * f(x);
    }
    return (3 * h / 8) * sum;
}
void main() {
    double a, b;
    int n;
    printf("Enter a, b, iterations:\n");
    scanf("%lf%lf%d", &a, &b, &n);
    double result = simp(a, b, n);
    printf("Result of integration: %lf\n", result);
}
