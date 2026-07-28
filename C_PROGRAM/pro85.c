#include<stdio.h>
void main()
{
	int row;
	FILE *fp;
	
	fp = fopen("myfile.txt","w");
	
	fprintf(fp,"\n hello");
	
	printf("\n File successfully created !!");
}
