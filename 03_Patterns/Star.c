//Left Aligned Star Pattern.
#include<stdio.h>
void main()
{
    int r,c,u;
    printf("Upto: ");
    scanf("%d",&u);
    for(r=0;r<=u;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("* ");
        }
        printf("\n");
    }
}