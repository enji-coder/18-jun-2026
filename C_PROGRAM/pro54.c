#include<stdio.h>
void main()
{
    int num,status; // variable declaration 
    
    status = 1; // variable define 

    while(status==1) // condition 
    {
        printf("Enter a number : ");
        scanf("%d",&num);

        printf("Do you want to continue ? press '1' for yes and press '0' for no : ");
        scanf("%d",&status); // updation 
    }
    printf("GAME OVER");
    
}