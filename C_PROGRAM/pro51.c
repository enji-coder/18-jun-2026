/*
 5  5  5  5  5 
 4  4  4  4 
 3  3  3 
 2  2 
 1 

*/
#include<stdio.h>
void main()
{
    int row,col;
    for(row = 5;row>=1;row--)
    {
        for(col = 1;col<=row;col++)
        {
            printf(" %d ",row);
        }
        printf("\n");
    }
}