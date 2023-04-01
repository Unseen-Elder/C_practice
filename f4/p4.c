#include<stdio.h>
float average(int n);
int main()
{
    int n;
    float a;
    printf("ENtre the value of n\n");
    scanf("%d",&n);

    a=average(n);

    printf("The average of %d numbers is %f",n,a);
    return 0;
}
float average(int n)
{
    int b=0;
    float sum=0,average,num;
    for(b;b<n;b++)
    {
        printf("Entre the number\n");
        scanf("%f",&num);
        sum=sum +num;
    }
    average=sum/n;
    return average;
}