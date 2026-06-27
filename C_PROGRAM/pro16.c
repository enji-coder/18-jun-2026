// Accept name from user 

#include<stdio.h>
void main()
{
    // step 1: variable declaration 
    char name[10]; // syntax :  char  <variablename>[size];
    
    // step 2 : accept value from user  or variable initlization 
    printf("Enter your name : ");
    scanf("%s",&name);
    
    printf("Hi, %s",name);
    
}   