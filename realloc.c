#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    int *ptr;
    ptr=(int*) calloc(n,sizeof(int));
    printf("Enter the size of array which you want to create:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of element %d is :\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("The value of element %d is :%d\n",i+1,ptr[i]);
    }

    printf("Enter the  new size of array which you want to create:");
    scanf("%d",&n);
    ptr=(int*) realloc(ptr,n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter the value of element %d is :\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("The value of element %d is :%d\n",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}