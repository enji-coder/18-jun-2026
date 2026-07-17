#include<stdio.h>
void main()
{
    // array syntax : <datatype>  varname[size];
    int marks[5] = {45,87,56,41,78}; // array defination; 
    int i;

    for(i=0;i<5;i++)
    {
        printf("\n %d ",marks[i]);
    }
}