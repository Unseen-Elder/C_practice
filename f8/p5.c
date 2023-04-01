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
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    (*ptr).code=100;
    // or we can use ptr->code=100;
    ptr->salary=2500.35;
    strcpy(ptr->name,"vipul");

    printf("%d\n",ptr->code);
    printf("%s\n",ptr->name);
    printf("%.2f",ptr->salary);

    return 0;
    
}