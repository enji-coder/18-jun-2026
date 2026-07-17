#include<stdio.h>
#include<conio.h>
struct Student
{
  int marks[5]; // array within structure 
}s1;
void main()
{
   //struct Student s1;
   
   int i;
   for(i = 0;i<5;i++)
   {
       printf("Enter marks : ");
       scanf("%d",&s1.marks[i]);
   }
}