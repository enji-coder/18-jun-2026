/*
3) jumping statements :
    
    there are 3 types of jumping statements 

    i) break 
    ii) continue 
    iii) go to 
*/

/*
i) break : break the loop   
        syntax:

        break;
*/
#include<stdio.h>
void main()
{
    int marks,i; // variable declaration 
    for(i = 1;i<=5;i++)
    {
        printf("\nEnter subject %d marks : ",i);
        scanf("%d",&marks);
        if(marks < 35)
        {
            printf("sorry you are failed !");
            break;
        }
    }
}