#include<stdio.h>
void addition(); // function declaration 
void main()
{
    int choice; 
    printf("\n 1) addition ");
    printf("\n 2) substraction ");
    printf("\n 3) multiplication ");
    printf("\n 4) division ");

    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            addition();
            break;
            case 2:
                // 
    }
}
void addition()
{
    int num1,num2,ans;
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("ENter number 2 : ");
    scanf("%d",&num2);

    ans = num1 + num2;
    printf("\n ans = %d",ans);
}   