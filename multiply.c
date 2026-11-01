#include<stdio.h>
int main()
{
    int a,b,mul;
    int *p1,*p2;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    mul=*p1 * *p2;
    printf("The product of two numbers are:%d",mul);
    return 0;
}