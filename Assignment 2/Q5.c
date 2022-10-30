#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("enter a number\n");
    scanf("%d",&x);
    sum=x%10;
    x=x/10;
    sum=sum+x%10;
    x=x/10;
    sum=sum+x%10;
    printf("sum of digits is %d",sum);
    return 0;
}
