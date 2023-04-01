#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1,e2,e3;


    printf("Entre the details of employee 1\n");

    printf("Code : \n");
    scanf("%d",&e1.code);
    printf("Salary : \n");
    scanf("%f",&e1.salary);
    printf("name : \n");
    fflush(stdin);
    gets(e1.name);

    printf("Entre the details of employee 2\n");
    printf("Code : \n");
    scanf("%d",&e2.code);
    printf("Salary : \n");
    scanf("%f",&e2.salary);
    printf("name : \n");
    fflush(stdin);
    gets(e2.name);

    printf("Entre the details of employee 3\n");
    printf("Code : \n");
    scanf("%d",&e3.code);
    printf("Salary : \n");
    scanf("%f",&e3.salary);
    printf("name : \n");
    fflush(stdin);
    gets(e3.name);

    printf("Details of employee 1:\n");
    printf("code : %d\n",e1.code);
    printf("salary : %.1f\n",e1.salary);
    printf("name : %s\n",e1.name);

    printf("Details of employee 2:\n");
    printf("code : %d\n",e2.code);
    printf("salary : %.1f\n",e2.salary);
    printf("name : %s\n",e2.name);

    printf("Details of employee 3:\n");
    printf("code : %d\n",e3.code);
    printf("salary : %.1f\n",e3.salary);
    printf("name : %s\n",e3.name);
    
    return 0;
}