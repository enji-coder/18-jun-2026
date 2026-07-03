#include<stdio.h>
void main()
{
    int num;
    printf("Enter num : ");
    scanf("%d",&num);
    
    if(num % 2 == 0)
    {
        printf("\n even no");
    }
    else
    {
        printf("\n odd no");
    }
}