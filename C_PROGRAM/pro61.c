#include<stdio.h>
void checkVotting(); // function declaration 
void posNegative(); // function declaration 
void main()
{
    int choice;
    printf("\n Menu");
    printf("\n press 1 for check votting eligibity ");
    printf("\n press 2 for check positive or negative");

    printf("\n Enter your choice : ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        checkVotting(); // calling 
    }
    else if(choice == 2)
    {

    }
    else
    {
        printf("\n invalid choice");
    }

}
void checkVotting() // function defination 
{
    int age;
    printf("\n Enter your age : ");
    scanf("%d",&age);

    if(age >= 18)
    {
        printf("\nyou are eligible for votting");
    }
    else
    {
        printf("\nyou are below 18");
    }
}
