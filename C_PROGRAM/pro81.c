#include<stdio.h>
#include<conio.h>
struct Student
{
    int id;
    char name[20];
    int marks[5]; // array within structure 
}s1[3]; // array of structure 
void main()
{
    int stu_loop,marks_loop;
    int i,j;

    for(stu_loop = 0;stu_loop<3;stu_loop++)
    {
        printf("\n---------Enter student %d information--------\n",stu_loop+1);
        printf("Enter student id : ");
        scanf("%d",&s1[stu_loop].id);

        getchar();
        printf("Enter student name : ");
        gets(s1[stu_loop].name);

        for(marks_loop = 0;marks_loop<5;marks_loop++)
        {
            printf("\n\t\t Enter marks :");
            scanf("%d",&s1[stu_loop].marks[marks_loop]);
        }
    }

    printf("\n ------ ALL STUDENTS DETAILES ---------- \n\n");

    for(i = 0;i<3;i++)
    {
        printf("\n Student %d information : ",i+1);
        printf("\n ID : %d",s1[i].id);
        printf("\n NAME : %s",s1[i].name);

            for(j=0;j<5;j++)
            {
                printf("\n Subject %d marks %d : ",j+1,s1[i].marks[j]);
            }
    }

}