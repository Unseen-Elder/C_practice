#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;
void print(emp a,emp b);
int main()
{
    emp e1,e2;
    
    e1.code=100;
    e1.salary = 25000;
    strcpy(e1.name,"Vipul");

    e2.code=101;
    e2.salary = 15000;
    strcpy(e2.name,"Harry");

    print(e1,e2);

    return 0;
}
void print(emp a,emp b)
{
    printf("The code of employee 1 is : %d\n",a.code);
    printf("The name of employee 1 is : %s\n",a.name);
    printf("The salary of employee 1 is : %.1f\n",a.salary);

    printf("The code of employee 2 is : %d\n",b.code);
    printf("The name of employee 2 is : %s\n",b.name);
    printf("The salary of employee 2 is : %.1f\n",b.salary);
}