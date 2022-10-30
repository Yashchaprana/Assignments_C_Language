#include<stdio.h>
int main()
{

    int x,t;
    printf("enter number");
    scanf("%d",&x);
   t =x%10;
   x=x/10;
   x=t*100+x;
   printf("%d",x);
   return 0;
}
