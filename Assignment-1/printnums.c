//Loop upto n-integers
#include<stdio.h>
int main()
{
    int a,i;
    float sum;
    printf("Enter the last integer!\n");
    printf("a= ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d\n",i);
        sum = sum + i;
    }
    printf("Sum:%f\n",sum);
    printf("Terminated!");
return 0;
}