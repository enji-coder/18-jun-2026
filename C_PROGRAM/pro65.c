// local variable 
#include<stdio.h>
void display()
{
    int num = 50; // variable declare - local variable 
    printf("\n using num inside the function : %d",num);
}
void main()
{
    display();
    printf("\n outside the function : %d ",num);
}
