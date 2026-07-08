/*

* 
* * 
* * * 
* * * * 
* * * * *

*/
#include<stdio.h>
void main()
{
    int row; // variable declaration 
    int col;
    for(row=1;row<=5;row++)  // 1 to 5 row 
    {
        for(col = 1;col<=row;col++)
        {
          printf(" * ");
        }
        printf("\n");
    }
}