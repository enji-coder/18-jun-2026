#include<stdio.h>
int marks =100; // global variable
void display()
{
    int num = 50; // variable declare - local variable 
    printf("\n using num inside the function : %d",num);
    printf("\n marks inside the func = %d ",marks);
}
void main()
{
    display();
    //printf("\n outside the function : %d ",num);
    printf("\n marks outside the func = %d ",marks);
}
