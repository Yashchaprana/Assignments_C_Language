#include<stdio.h>
int main()
{

    char a[100];
    int x;
    printf("enter string\n");
    scanf("%s",&a);
    x = printf("%s\n",a);
    printf("length of string is %d",x-1);
    return 0;
}
