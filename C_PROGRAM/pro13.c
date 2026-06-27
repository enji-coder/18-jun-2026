// swap two values 

#include<stdio.h>
void main()
{
    // variable declaration     
    int A,B,C; 
    
    // variable initlization 
    A = 10; 
    B = 20;
    
    printf("\n---- BEFOR SWAPING ----- ");
    printf("\n A = %d",A);
    printf("\n B = %d",B);
    
    
    C = A;     // C = 10  // here, C is my temp variable 
    A = B;     // A = 20 
    B = C;     // B = 10 
    
    printf("\n---- AFTER SWAPING ----- ");
    printf("\n A = %d",A);
    printf("\n B = %d",B);
    
}