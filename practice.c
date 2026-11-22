#include<stdio.h>
#include<string.h>
struct Student
{
    char name[30];
    char gender;
    int age;
    float marks;
};
struct Student s1,s2;

void print()
{
    printf("Name of s1: %s\n",s1.name);
    printf("Name of s2: %s\n",s2.name);
    printf("Gender of s2: %c\n",s2.gender);  
    printf("Marks of s2: %.2f\n",s2.marks);
}
int main()
{
    strcpy(s1.name,"Himanshu");
    strcpy(s2.name,"Neha");
    s1.gender = 'M';
    s2.gender = 'F';
    s1.age = 18;
    s2.age = 18;
    s1.marks = 85.5;
    s2.marks = 90.0;
    // struct Student s1 = {"Himanshu", 'M', 18, 85.5};
    // struct Student s2 = {"Neha", 'F', 18, 90.0};
    // printf("Name of s1: %s\n",s1.name);
    // printf("Gender of s1: %c\n",s1.gender);
    // printf("Age of s1: %d\n",s1.age);   
    // printf("Marks of s1: %.2f\n",s1.marks);
    // printf("Name of s2: %s\n",s2.name);
    // printf("Gender of s2: %c\n",s2.gender);
    // printf("Age of s2: %d\n",s2.age);   
    // printf("Marks of s2: %.2f\n",s2.marks);
    print();
    return 0;
}

