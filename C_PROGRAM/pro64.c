#include<stdio.h>
void main()
{
    int n1,n2;
    int result;
    printf("Enter number 1 : ");
    scanf("%d",&n1);
    printf("Enter number 2 : ");
    scanf("%d",&n2);
    
    result = addition(n1,n2);
    printf("\n result = %d",result);
}
int addition(int num1,int num2)
{
    int ans;
    ans = num1 + num2;
    return ans;
}