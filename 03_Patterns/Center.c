//Center-Aligned star pattern
#include <stdio.h>
void main()
{
    int u,r,c,i;
    printf("Upto: ");
    scanf("%d",&u);

    for(r = 1;r<=u;r++) 
    {
        for(i=1;i<=u-r;i++) 
        {
            printf(" ");
        }

        for(c=1;c<=r;c++) 
        {
            printf("*");
            if (c!=r) 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
