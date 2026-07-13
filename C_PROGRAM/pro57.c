/*
ii) continue : skip the current statement and loop will continue 
        syntax : 

            continue; 
*/

#include<stdio.h>
void main()
{
    int i;
    for(i = 1;i<=5;i++)
    {
        if(i == 3)
        {
            continue;
        }
        printf("\n %d",i);
    }
}