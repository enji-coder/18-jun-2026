#include<stdio.h>
void main()
{
	int row;
	char name[20];
	FILE *fp;
	
	fp = fopen("myrecords.txt","a");
	
	for(row=1;row<=5;row++)
	{
		printf("Enter name : ");
		gets(name);
		fprintf(fp,"\n Name : %s",name);
	}
	
	printf("\n File successfully created !!");
}
