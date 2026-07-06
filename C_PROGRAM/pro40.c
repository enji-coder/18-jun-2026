/*
accept 5 person age from user check entered age 
eligible votting or not. 

count total eligible person. 
expected output :::: 
Enter age 1 : 23
Enter age 2 : 8
Enter age 3 : 4

Total eligible : 1
*/

#include<stdio.h>
void main()
{
    int age;
    int num;
    int eligible_counter = 0;
    for(num = 1;num <= 5;num++)
    {
        printf("Enter person %d age : ",num);
        scanf("%d",&age);
        
        if(age >= 18)
        {
            eligible_counter += 1;
        }
    }
    
    printf("\n total eligible : %d",eligible_counter);
}