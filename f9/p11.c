#include<stdio.h>
typedef struct employee
{
    char name[20];
    float salary;
} emp;
int main()
{
    emp e1,e2;
    FILE *fptr;
    fptr=fopen("s6.txt","w");

    printf("Entre the name of 1st employee\n");
    fflush(stdin);
    gets(e1.name);
    printf("Entre the salary of 1st employee\n");
    scanf("%f",&e1.salary);

    printf("Entre the name of 2nd employee\n");
    fflush(stdin);
    gets(e2.name);
    printf("Entre the salary of 2nd employee\n");
    scanf("%f",&e2.salary);

    fprintf(fptr,"%s %.2f\n",e1.name,e1.salary);
    fprintf(fptr,"%s %.2f",e2.name,e2.salary);

    fclose(fptr);

    return 0;
}