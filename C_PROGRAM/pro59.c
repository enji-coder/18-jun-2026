#include<stdio.h>
void main()
{
   int marks,i;
   for(i = 1;i<=5;i++)
   {
       printf("\nEnter your marks : ");
       scanf("%d",&marks);
       
       if(marks < 35)
       {
           printf("\n you are fail in this subject");
           continue;
       }
   }
}