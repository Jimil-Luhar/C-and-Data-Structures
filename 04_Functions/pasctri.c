#include<stdio.h>

void pascal(int u)
{
    int coeff=2;
    for(int r=0;r<u;r++)
    {
        for(int s=1;s<=u-r;s++)
        {
            printf(" ");
        }
        for(int i=0;i<=r;i++)
        {
            if(r==0||i==0)
                coeff=1;
            else
                coeff=coeff*(r-i+1)/i;
            printf("%d ",coeff);
        }
        printf("\n");
    }
}
void main(){
    pascal(5);
}