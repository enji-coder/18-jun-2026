// function with parameters without return type 
#include<stdio.h>
void addition(int num1,int num2); // parameter 
void mul(int num1,int num2); // parameter 
void main()
{
    int n1,n2;
    printf("Enter number 1 : ");
    scanf("%d",&n1);
    printf("Enter number 2 : ");
    scanf("%d",&n2);

    addition(n1,n2);  // arguments
    mul(n1,n2);
}
void addition(int num1,int num2)
{
    int ans;
    ans = num1 + num2;
    printf("\n ans = %d ",ans);
}
void mul(int num1,int num2)
{
    int ans;
    ans = num1 + num2;
    printf("\n ans = %d ",ans);
}