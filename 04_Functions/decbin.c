#include <stdio.h>
void decToBin(int num) {
    int binary[32], index = 0;
    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}
void main(){
    decToBin(57);
}