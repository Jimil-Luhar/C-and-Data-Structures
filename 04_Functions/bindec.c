#include <stdio.h>

int binToDec(int binary) {
    int solution = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        solution += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    return solution;
}
void main(){
    printf("%d",binToDec(111001));
}



/*#include <stdio.h>

int binaryToDecimal(int binary) {
    int solution = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        solution += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    return solution;
}
void main(){
    printf("%d",binaryToDecimal(111001));
}
*/