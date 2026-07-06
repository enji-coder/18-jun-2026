#include <stdio.h>
void main()
{
    // accept 5 numbers from user 
    int i;
    int num;
    int sum =0;
    
    for(i = 1;i<=5;i++)
    {
        printf("\nEnter a number : ");
        scanf("%d",&num);
        sum+= num;
    }

    printf("\n : addition = %d",sum);
}