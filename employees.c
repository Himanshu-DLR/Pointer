#include<stdio.h>
struct Employees
{
    char name[50];
    int id;
    float salary;
}e[100];

int main()
{
    int i , n;
    printf("Enter number of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The details of employees are %d.\n",i+1);
        printf("Enter name of the employee:");
        scanf("%s",&e[i].name);
        printf("Enter ID of the employee:");
        scanf("%d",&e[i].id);
        printf("Enter salary of the employee:");
        scanf("%f",&e[i].salary);
    }
    for(i=0;i<n;i++)
    {
        printf("The details of employees are %d.\n",i+1);
        printf("Name of the employee:%s\n",e[i].name);
        printf("ID of the employee:%d\n",e[i].id);
        printf("Salary of the employee:%f\n",e[i].salary);
    }
    return 0;
}
