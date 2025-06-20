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
void main(){
    (isPrime(97))?printf("Prime"):printf("Not Prime");
}