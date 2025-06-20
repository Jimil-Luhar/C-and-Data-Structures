#include <stdio.h>
void sort(int a[], int s);
void merge(int a1[], int s1, int a2[], int s2, int Arr[]);
void main() {
    int a[5] = {55, 2, 7, 16, 1}, b[5] = {8, 6, 12, 14, 6}, c[10];
    sort(a, 5);  
    sort(b, 5);
    merge(a, 5, b, 5, c);
    for (int o = 0; o < 10; o++)
        printf("%d ", c[o]);
}
void sort(int a[], int s) {
    for (int i = 0; i < s - 1; i++) {
        for (int j = 0; j < s - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void merge(int a1[], int s1, int a2[], int s2, int Arr[]) {
    for(int m=0;m<s1+s2;m++){        
        (m<s1)?(Arr[m]=a1[m]):(Arr[m]=a2[m-s1]);
    }
}


