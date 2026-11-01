#include<stdio.h>
int main()
{
    int a,b,div;
    int *p1,*p2;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    div=*p1 / *p2;
    printf("The division of two numbers are:%d",div);
    return 0;
}