#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Entre first number\n");
    scanf("%d",&a);
    printf("Entre second number\n");
    scanf("%d",&b);
    printf("Entre third number\n");
    scanf("%d",&c);
    printf("Entre fourth number\n");
    scanf("%d",&d);
    
    printf("The greatest number of all is ");

    if(a>b && a>c && a>d)
    {
        printf("%d",a);
    }
    else if (b>a && b>c && b>d)
    {
        printf("%d",b);
    }
    else if (c>a && c>b && c>d)
    {
        printf("%d",c);
    }
    else if (d>a && d>b && d>c)
    {
        printf("%d",d);
    }
    
    return 0;
}