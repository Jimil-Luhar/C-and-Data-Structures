#include <stdio.h>
#define n 5
void main() {
    int arr[n];
    printf("Input %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Reversed Array: \n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}
