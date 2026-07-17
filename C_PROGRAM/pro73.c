// without using inbuilt function 

#include<stdio.h>
#include<string.h>
void main()
{
    // find length of string 
    char name[20]; // string : is a character of array 
    int count;
    int i;
    printf("Enter your name : ");
    gets(name);
    
    for(i=0;name[i] != '\0';i++)
    {
        count++;
    }
    printf("\n length = %d",count);
}