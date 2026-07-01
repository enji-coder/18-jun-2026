"""
conditional operator : 
    which is called ternary operator 

    ? : 

    syntax : exp1 ?  exp2 : exp3 
"""
#include<stdio.h>
void main()
{
    // variable declaration 
    int num1,num2; 
    int result = 0;
    
    printf("Enter num1 : ");
    scanf("%d",&num1);
    
    printf("Enter num2 : ");
    scanf("%d",&num2);
    
    //  exp1  ?   exp2(true)  : exp3 (false)
    
    result = num1 > num2 ? num1 : num2;
    printf("\n gretest number is : %d",result);
    
}