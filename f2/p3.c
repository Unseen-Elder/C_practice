#include<stdio.h>
int main()
{
    int age;
    printf("Entre your age\n");
    scanf("%d",&age);

    if (age < 18 || age >= 90)
    {
        printf("you cannot drive\n");
    }
    else
    {
        printf("you can drive\n");
    }
    return 0;
}