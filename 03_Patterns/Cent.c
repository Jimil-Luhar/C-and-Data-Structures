#include<stdio.h>
int main(){
    int u,i;
    printf("Upto: ");
    scanf("%d",&u);
    for(i=1;i<=u;i++){
        (i%2==0)?printf("%d\n",i*i):printf("%d\n",i*i*i);
    }}