#include<stdio.h>
int main()
{
    int num;

    printf("Entre your number between 0 to 30\n");
    scanf("%d",&num);

    if ((num>=0 && num <=10))
    {
        printf("%d is in between 0 to 10\n",num);
    }
    if ((!(num>=0 && num <=10)) && (num<=30 && num>=0))
    {
        printf("%d is not in between 0 to 10\n",num);
    }
    if ((!(num<=10 || num>20))&& (num<=30 && num>=0))
    {
        printf("%d is in between 11 to 20\n",num);
    }
    if ((num<=10 || num>20)&& (num<=30 && num>=0))
    {
        printf("%d is not in between 11 to 20\n",num);
    }

    if ((!(num>=21 && num<=30)) && (num<=30 && num>=0))
    {
        printf("%d is not in between 21 to 30\n",num);
    }
    if ((num>=21 && num <=30))
    {
        printf("%d is in between 21 to 30\n",num);
    }
    if (num>30 || num<0)
    {
        printf("%d is not in between 0 to 30\n",num);
    }

    return 0;
}