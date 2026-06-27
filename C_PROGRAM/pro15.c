// FIND ASCII VALUE 

#include<stdio.h>
void main()
{
    // Expected output : Enter character : A 
    //                   A = 65 
    
    // step 1 : variable declaration 
    char choice;
    
    printf("\nEnter character : ");
    scanf("%c",&choice);
    
    printf("%c = %d",choice,choice);
}   