#include<stdio.h>
struct SData
{
    int i;
    float f;
    char str[20];
};

union UData
{
    int i;
    float f;
    char str[20];
};

int main()
{
    struct SData S;
    union UData U;
    printf("Size of struct = %lu bytes\n",sizeof(S));
    printf("Size of union = %lu bytes\n",sizeof(U));
    return 0;
}