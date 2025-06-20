#include <stdio.h>
int rev(int num) {
    int reversed = 0;

    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
void main(){
    printf("%d",rev(127056));
}
