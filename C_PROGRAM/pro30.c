#include<stdio.h>
#include<string.h>
void main()
{
    char db_email[20]  = "a@gmail.com";
    char db_password[20] = "123456";
    char username[20] = "Admin";
    
    char email[20],password[20]; // variable declaration 
    
    printf("Enter email : ");
    gets(email);
    
    
    if(strcmp(db_email,email) == 0)
    {   
        printf("Enter password : ");
        gets(password);
    
        if(strcmp(db_password,password) == 0)
        {
            printf("welcome %s",username);
        }
        else
        {
            printf("invalid password");
        }
    }
    else
    {
        printf("invalid email - user does not exists ");
    }
}