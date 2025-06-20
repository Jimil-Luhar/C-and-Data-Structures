//Pattern using ASCII value.
#include<stdio.h>
void main()
{
    int r,c,u,i=1;
    printf("Upto: ");
    scanf("%d",&u);
    for(r=1;r<=u;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%c ",64+c);
        }
        printf("\n");
    }
}
