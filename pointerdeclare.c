#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("value of a:%d\n",a);
    printf("Address of a:%x\n",ptr);
    printf("Value of pointer store the address of a:%d\n",*ptr);
    return 0;
}