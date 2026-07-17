#include<stdio.h>
#include<string.h>
void main()
{
   // copy one string into another string 
   char str1[20];
   char str2[20];
   
   printf("Enter string 1 : ");
   gets(str1);
   printf("Enter string 2 : ");
   gets(str2);
   
   printf("\n s1 : %s ",str1);
   printf("\n s2 : %s ",str2);
   
   // strcpy(oldstr,newstr);
   strcpy(str1,str2);
   
   printf("\n s1 : %s ",str1);
   printf("\n s2 : %s ",str2);
}