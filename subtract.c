#include<stdio.h>
int main()
{
    int a,b,sub;
    int *p,*q;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    sub=*p-*q;
    printf("The difference is: %d",sub);
    return 0;
}