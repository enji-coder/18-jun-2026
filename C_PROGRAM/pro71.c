#include<stdio.h>
void main()
{
    // a[row][col];
    int a[2][3];
    int row,col;
    
    for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("\n Enter a[%d][%d] :",row,col);
            scanf("%d",&a[row][col]);
        }
    }
    printf("\n--------------------\n");
    for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        { 
            printf(" %d ",a[row][col]);
        }
        printf("\n");
    }

}