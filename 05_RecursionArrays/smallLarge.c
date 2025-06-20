#include <stdio.h>
#define n 5
void main() {
    int arr[n];
    printf("Input %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int smallest = arr[0], largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) 
            smallest = arr[i];
        if (arr[i] > largest) 
            largest = arr[i];
    }
    printf("Smallest: %d\n", smallest);
    printf("Largest: %d\n", largest);
}
