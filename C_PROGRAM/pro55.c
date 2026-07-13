#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
void main()
{
    int num; 
    bool status = true; // variable defination 
    char choice; 

    while(status)
    {
        printf("Enter a number : ");
        scanf("%d",&num); 
        getchar(); // to clear buffer 
        printf("do you want to continue ? press 'y' for yes and press 'n' for no : ");
        scanf("%c",&choice);

        if(choice == 'n')
        {
            status = false;
        }

    }
}