#include<stdio.h>
void main()
{
    // array syntax : <datatype>  varname[size];
    int marks[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter marks : ");
        scanf("%d",&marks[i]);
    }
    printf("\n-----------\n");
    for(i=0;i<5;i++)
    {
        printf("\n marks = %d",marks[i]);
    }
}