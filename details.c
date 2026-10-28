#include<stdio.h>
struct student
{
    char name[20];
    int age;
    float marks;
}s1[3];

int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter the name:");
        scanf("%s",s1[i].name);
        printf("Enter the age:");
        scanf("%d",&s1[i].age);
        printf("Enter the marks:");
        scanf("%f",&s1[i].marks);
    }
    printf("Display the details of students:\n");
    for(i=0;i<3;i++)
    {
        printf("%s\t",s1[i].name);
        printf("%d\t",s1[i].age);
        printf("%f\t",s1[i].marks);
    }
    return 0;
}