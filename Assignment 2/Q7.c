#include<stdio.h>
int main()
{

    int a;
    printf("enter number");
    scanf("%d",&a);
    (a&1)?printf("odd"):printf("even");
    return 0;

}
