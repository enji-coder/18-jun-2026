// check number even or odd 
#include<stdio.h>
void main()
{
    int num;
    int row;
    for(row = 1;row<=5;row++)
    {
        printf("\nEnter a number : ");
        scanf("%d",&num);

        if(num % 2 == 0 )
        {
            printf("\n%d Even ",num);
        }
        else
        {
            printf("\n\t%d  odd ",num);
        }
    }
}