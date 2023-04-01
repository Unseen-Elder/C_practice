#include<stdio.h>
int main()
{
    int age;
    printf("Entre your age\n");
    scanf("%d",&age);

    if (age<18)
    {
        printf("you are below 18,you cannot drive\n");
    }
    if (age>=90)
    {
        printf("you are above 89,you cannot drive\n");
    }
    else
    {
        printf("you can drive\n");
    }
    return 0;
}