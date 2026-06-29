#include<stdio.h>
void main()
{
    int a,b; // step 1 : variable declaration 
    // variable initlization 
    a = 10; 
    b = 20; 
    printf("\na = %d , b = %d  ",a,b);
    //a = a + b;  // a + b   a = 30 
    a += b;
    printf("\na = %d , b = %d  ",a,b);
    
}