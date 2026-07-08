/*
1
2 3
4 5 6 
7 8 9 10 
*/
#include<stdio.h>
void main()
{
    int row; // variable declaration 
    int col;
    int num = 1;
    for(row=1;row<=5;row++)  // 1 to 5 row 
    {
        for(col = 1;col<=row;col++)
        {
           printf(" %d ",num);
           num++;
        }
        printf("\n");
    }
}