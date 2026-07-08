/*
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/
#include<stdio.h>
void main()
{   
    // nested for loop 
    int row; // variable declaration 
    int col;
    for(row=1;row<=5;row++)  // 1 to 5 row // outer loop 
    {
        for(col = 1;col<=5;col++) //inner loop 
        {
            printf(" * ");
        }
        printf("\n");
    }
}