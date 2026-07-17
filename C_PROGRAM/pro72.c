#include<stdio.h>
#include<string.h>
void main()
{
    // find length of string 
    char name[20]; // string : is a character of array 
    printf("Enter your name : ");
    gets(name);
    printf("length = %d ",strlen(name));
}