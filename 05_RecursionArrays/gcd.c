#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void main() {
    int num1, num2;
    printf("Input two numbers:\n");
    scanf("%d %d", &num1, &num2);
    int result = gcd(num1, num2);
    printf("GCD: %d\n", result);
}


