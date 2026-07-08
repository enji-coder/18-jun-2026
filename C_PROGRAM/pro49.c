/*
A 
B C 
D E F 
G H I J 
K L M N O
*/
#include<stdio.h>
void main()
{
    int row,col;
    int num = 65;
    for(row=1;row<=5;row++)
    {
        for(col = 1;col<=row;col++)
        {
            printf(" %c ",num);
            num++;
        }
        printf("\n");
    }
}