#include<stdio.h>
int main()
{
    float INR,USD;
    printf("enter rupees in INR\n");
    scanf("%f",&INR);
    USD = (INR)/(76.23);
    printf("conversion of INR rupees %.2f in USD is %.2f",INR,USD);

    return 0;
}
