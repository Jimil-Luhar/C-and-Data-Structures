/*//Ascending Square value
#include<stdio.h>
void main()
{
    int u,r,c,t=1;
    printf("Upto: ");
    scanf("%d",&u);
    for(r=1;r<=u;r++){
        for(int s=1;s<=u-r;s++){
            printf(" ");
        }
        for(c=1;c<=r;c++){
            if(r<4)
                printf("  %d",t*t);
            else
                printf("%d ",t*t);
        }

        printf("\n");
        t++;
    }
}
*/

//Ascending Square value
#include<stdio.h>
void main()
{
    int u,r,c,t=1;
    printf("Upto: ");
    scanf("%d",&u);
    for(r=1;r<=u;r++){
        for(int s=1;s<=u-r;s++){
            printf(" ");
        }
        for(c=1;c<=r;c++){
            printf("%d ",t*t);
        }

        printf("\n");
        t++;
    }
}   