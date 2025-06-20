//Another pattern
#include<stdio.h>
void main(){
    int r,c,i,u;
    printf("Upto: ");
    scanf("%d",&u);

    for(r=1;r<=u;r++){
        for(i=1;i<=r;i++){
            (i%2==0)?printf("%d ",i*i):printf("%d ",i*i*i);
        }
        printf("\n");
    } 
}