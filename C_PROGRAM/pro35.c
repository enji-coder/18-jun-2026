#include <stdio.h>
void main()
{
    int start,end;
    int row;
    printf("Enter starting point : ");
    scanf("%d",&start);
    printf("Enter ending point : ");
    scanf("%d",&end);
    
    for(row=start;row<=end;row++)
    {
        printf(" %d ",row);
    }
}`