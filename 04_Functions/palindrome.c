#include <stdio.h>
#include <stdbool.h>
bool isP(int num) {
    int original = num;
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}
void main(){
    printf("%s\n", isP(12021) ? "true" : "false");
}