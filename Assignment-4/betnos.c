#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num == 2) {
        return true;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;    
}

void printPrimes(int start, int end) {
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d\n", num);
        }
    }
}
void main(){
    printPrimes(0,20);
}
