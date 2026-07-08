/*
while loop : while loop is an entry controlled loop 

syntax : 

initialization;
while (condition)
{
    // block of code 
    // updation;
} 

*/
#include<stdio.h>
void main()
{
    int coupon = 5; // initlization 
    while (coupon >= 1) // condition 
    {
        printf("\n coupon code : %d",coupon); // statement 
        // updation;
        coupon--;
    } 
    printf("\nsorry ! coupon is over now !");
    
}