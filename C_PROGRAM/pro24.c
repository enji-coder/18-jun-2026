#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    
    if(age > 18)
    {
        printf("\n you are eligible for votting");
    }
    else
    {
        printf("\n you are not eligible ");
    }
}