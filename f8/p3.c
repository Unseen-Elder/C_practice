#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    float GPA;
    char name[10];
};
int main()
{
    struct student IITD[5];

    for(int i=0;i<5;i++)
    {
    printf("Entre the details of student %d\n",i+1);

    printf("Roll no. : \n");
    scanf("%d",&IITD[i].roll_no);
    
    printf("GPA : \n");
    scanf("%f",&IITD[i].GPA);
    
    printf("name : \n");
    fflush(stdin);
    gets(IITD[i].name);

    }

    for(int i=0;i<5;i++)
    {
        printf("Details of student %d : \n",i+1);

        printf("Roll No. : %d\n",IITD[i].roll_no);
        printf("GPA : %.1f\n",IITD[i].GPA);
        printf("Name : %s\n",IITD[i].name);   
    }
}