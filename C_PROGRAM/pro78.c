#include<stdio.h>
#include<conio.h>
struct Student
{
  int id;
  char name[20];
};
struct Employee 
{
    int id;
    char name[20];
};
void main()
{
    struct Student s1;
    struct Employee e1; 
    
    printf("\n Enter student details :: \n");
    printf("Enter id :");
    scanf("%d",&s1.id);
    
    getchar();
    printf("Enter name : ");
    gets(s1.name);
        
    printf("\n-----STUDENT INFORMATION ------------\n");
    printf("\n id : %d",s1.id);
    printf("\n name : %s ",s1.name);
    
}