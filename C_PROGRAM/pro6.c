#include<stdio.h>
void main()
{
    // expected output : 10 + 20 = 30   
    // not like : ans = 30   X 
    
    // step 1 : variable declaration 
    int num1,num2,ans = 0;
    
    // step 2 : variable initlization  or allocate value  or value assign 
    num1 = 10;
    num2 = 20;
    
    ans = num1 + num2; 
    
    printf("\n %d + %d = %d",num1,num2,ans);
}