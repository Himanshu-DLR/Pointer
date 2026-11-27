#include<stdio.h>
int main()
{
    int arr[5]={5,10,12,3,8};
    int *ptr=arr;
    int i,larg=ptr[0];
    for(i=0;i<5;i++)
    {
        if(ptr[i]>larg)
        {
            larg=ptr[i];
        }
    }
    printf("The largest element is: %d\n", larg);
    return 0;
}