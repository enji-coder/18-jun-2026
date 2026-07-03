#include<stdio.h>
void main()
{
    int score;
    printf("Enter score : ");
    scanf("%d",&score);
    
    if(score >= 70)
    {
        printf("A grade");
    }
    else if(score >= 60 && score < 70)
    {
        printf("B grade");
    }
    else if(score >= 50 && score < 60)
    {
        printf("C grade");
    }
    else if(score >= 40 && score <50)
    {
        printf("D grade");
    }
    else
    {
        printf("FAIL !");
    }
}