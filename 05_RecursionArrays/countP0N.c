#include <stdio.h>
#define n 5 
void main() {
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) 
            positive++;
        else if (arr[i] < 0) 
            negative++;
        else 
            zero++;
    }
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zero: %d\n", zero);
}
