//Floyd's Triangle
#include<stdio.h>
void main()
{
    int r,c,u,i=1;
    printf("Upto: ");
    scanf("%d",&u);
    for(r=1;r<=u;r++){
        for(c=1;c<=r;c++){
            printf("%d ",i);
            i++;
        }
        printf("\n");
    }
}