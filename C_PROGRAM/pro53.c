#include<stdio.h>
void main()
{
    int i = 1;// initization 
    int num;
    int sum=0;
    while (i <= 5 ) // condition 
    {
        printf("Enter a number : ");
        scanf("%d",&num);
        sum+= num;
        i++;
    } 
    printf("\n sum = %d",sum);
    
}