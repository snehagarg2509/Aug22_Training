#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
 
struct student
{
    char name[MAX];
    unsigned int age;
    char grade;
}var;
 
typedef struct student STUDENT;
 
int main()
{  
    printf("Enter name: \n");
    fgets(var.name,MAX,stdin);
 
    printf("Enter age and grade: \n");
    scanf("%d %c",&var.age,&var.grade);
 
    printf("Details are:\n%s%d %c\n",var.name,var.age,var.grade);
 
    return 0;
}
