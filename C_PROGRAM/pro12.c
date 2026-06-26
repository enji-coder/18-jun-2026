#include<stdio.h>
void main()
{
    // step 1 : variable declaration 
    
    int num1,num2,ans=0;
    
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    
    printf("num1 = %d",num1);
    
    printf("\nEnter number 2 : ");
    scanf("%d",&num2);
    
    printf("\nnum2 = %d",num2);
    
    ans = num1 + num2;
    
    printf("\n%d + %d = %d ",num1,num2,ans);
}