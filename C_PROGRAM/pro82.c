#include<stdio.h>
#include<conio.h>
struct Address
{
    char city[20];
    int pincode;
    char country[20];
};
struct Student
{
    int id;
    char name[20];
    struct Address addr;
};
struct Employee 
{
    int id;
    char name[20];
    struct Address addr;
};
void main()
{
    struct Student s1;

    printf("\nEnter student detailes ::: ");
    printf("\n Enter id : ");
    scanf("%d",&s1.id);
    getchar();
    printf("Enter name : ");
    gets(s1.name);
    
    printf("Enter city : ");
    gets(s1.addr.city);
    printf("Enter country : ");
    gets(s1.addr.country);

    printf("Enter pincode :");
    scanf("%d",&s1.addr.pincode);

}