#include<stdio.h>
int main()
{
    int x;
    printf("enter number\n");
    scanf("%d",&x);
    x=x/10;
    x=x*10;
    printf("desired output is %d",x);

    return 0;
}
