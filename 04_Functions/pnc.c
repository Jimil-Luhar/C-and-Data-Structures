#include<stdio.h>
int factorial(int num){
    int product = 1;
    for(int i=0;i<num;i++){
        product *= num-i;
    }
    return product;
}
int permutation(int a, int b){
    int per=factorial(a)/factorial(a-b);
    return per;
}
int combination(int a, int b){
    int com=factorial(a)/(factorial(a-b)*factorial(b));
    return com;
}
void main(){
    printf("%d",permutation(3,2));
    printf("\n%d",combination(3,2));
}