#include<stdio.h>
#include<conio.h>
struct Student
{
  int id;
  char name[20];
};

void main()
{
    struct Student s1[3]; // array of structure 
    int i;
    for(i = 0;i<3;i++)
    {
        printf("Enter id : ");
        scanf("%d",&s1[i].id);
        getchar();
        printf("Enter name : ");
        gets(s1[i].name);
    }

    printf("\n------------------\n");
    for(i = 0;i<3;i++)
    {
        printf("\n id : %d",s1[i].id);
        printf("\n name : %s",s1[i].name);
    }
    
    
}