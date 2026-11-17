#include<stdio.h>
struct Book
{
    char title[50];
    char author[50];
    float price;
    int pages;
};
int main()
{
    struct Book b[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter details of book %d:\n",i+1);
        printf("Enter title of book:");
        scanf("%[^\n]",b[i].title);
        printf("Enter author of book %d\n: ",i+1);
        scanf("%[^\n]",b[i].author);
        printf("Enter price of book %d\n: ",i+1);
        scanf("%f\n",&b[i].price);
        printf("Enter number of pages of book %d\n : ",i+1);
        scanf("%d\n",&b[i].pages);
    }
    printf("\n Details of books:\n");
    for(int i=0;i<3;i++)
    {
        printf("Book %d: %s by %s|$%.2f| %d pages\n",i+1,b[i].title,b[i].author,b[i].price,b[i].pages);
    }
    return 0;
}