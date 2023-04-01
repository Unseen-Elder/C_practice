#include<stdio.h>
int main()
{
    int num;
    printf("entre a number between 0 to 30\n");
    scanf("%d",&num);
    if (num>=0 && num<=10)
    {
        printf("%d is in between 0 to 10\n",num);
    }
    else if (num>=11 && num<=20)
    {
        printf("%d is in between 11 to 20\n",num);
    }
    else if (num>=21 && num<=30)
    {
        printf("%d is in between 21 to 30\n",num);
    }
    else 
    {
        printf("%d is not in between 0 to 30",num);
    }
// as soon as any one of the condition in if else if ladder satisfies , the ladder will break
// conditions will be checked top to bottom
    return 0;
}