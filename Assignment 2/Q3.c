#include<stdio.h>
int main()
{

    int x,y,z;
    printf("enter two numbers\n");
    scanf("%d %d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("after swap value of x=%d and y=%d",x,y);
    return 0;
}
