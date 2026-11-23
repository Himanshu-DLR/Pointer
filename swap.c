#include<stdio.h>
int main()
{
    int a,b,temp;
    int *p,*q;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;  
    *q=temp;
    printf("After swapping:\n");
    printf("a=%d\n",*p);
    printf("b=%d\n",*q);
    return 0;
}