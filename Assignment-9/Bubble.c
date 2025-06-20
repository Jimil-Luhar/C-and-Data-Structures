#include<stdio.h>
void main() {
    int arr[8]={5,9,6,3,1,4,7,2};
    for (int i = 0; i < 8 - 1; i++) {
        for (int j = 0; j < 8 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int o=0;o<8;o++){
        printf("%d ",arr[o]);
    }
}

/*#include<stdio.h>
void main() 
{
    int arr[8]={5,9,6,3,1,4,7,2};
    int size=8;
    printf("Unsorted:");
    for(int o=0;o<size;o++){
        printf("%d ",arr[o]);
    }
    printf("\n");
    printf("Sorted:  ");
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int o=0;o<size;o++){
        printf("%d ",arr[o]);
    }
}*/
