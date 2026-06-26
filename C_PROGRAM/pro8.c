#include<stdio.h>
void main()
{
    // expected output : 15 / 2 = 7.5; 
    
    // step 1 : variable declaration 
    float num1,num2,ans;
    
    // step 2 : variable initlization 
    num1 = 15;
    num2 = 2;
    
    ans = num1 / num2;
    
    printf("%0.f / %0.f = %0.1f ",num1,num2,ans);

}