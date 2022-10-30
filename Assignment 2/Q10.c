#include<stdio.h>
int main()
{
    int num,digit;
    printf("enter number and digit\n");
    scanf("%d %d",&num,&digit);
    num = (num*10) + digit;
    printf("desired number is %d",num);

    return 0;
}
