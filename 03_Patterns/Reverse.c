//Center-Aligned reverse pattern
#include <stdio.h>
void main()
{
    int u,r,c,i,un;
    printf("Upto: ");
    scanf("%d",&u);
    un=u;
    for(r = 1;r<=u;r++) 
    {
        for(i=1;i<=u-r;i++) 
        {
            printf(" ");
        }

        for(c=1;c<=r;c++) 
        {
            printf("%d ",un);
        }
        printf("\n");
        un--;
    }
}
