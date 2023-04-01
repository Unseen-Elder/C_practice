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
    struct employee vipul ={100 , 250.35 ,"vipul"};
    struct employee harry ={0};

    printf("code is : %d \n",vipul.code);
    printf("salary is : %.2f \n",vipul.salary);
    printf("name is : %s \n",vipul.name);

    printf("code is : %d \n",harry.code);
    printf("salary is : %.2f \n",harry.salary);
    printf("name is : %s \n",harry.name);

    return 0;
}