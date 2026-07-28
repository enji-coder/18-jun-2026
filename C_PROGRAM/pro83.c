/*
pointer : pointer is a special variable which can contain address of another variable. 

    syntax : 

    <datatype>  variablename;
    

    * value at operator 

    & address at operator 
*/
#include<stdio.h>
void main()
{
    int num = 10; 
    int *ptr = &num;  // address of num variable 
    printf("\n num = %d ",num);
    printf("\n address = %p",num);
    
    printf("\n value of ptr : %d",*ptr);
    printf("\n address of ptr : %p",ptr);
}