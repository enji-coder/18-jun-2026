#include<stdio.h>
void main()
{
    printf("\n press 1 for play");
    printf("\n press 2 for continue");
    printf("\n press 3 for settings");
    printf("\n press 4 for exit ");
    
    // variable declare 
    int choice;
    
    printf("Enter your choice : ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
            printf("play menu");
            break;
            
        case 2 :
            printf("continue game");
            break;
            
        case 3:
            printf("open setting options");
            break;
        
        default:
            printf("exit : thank you for using this app");
    }
}