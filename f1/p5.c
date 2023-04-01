#include<stdio.h>
int main()
{
    float p,r,t,i,a;
    printf("Entre the value of principle amount\n");
    scanf("%f",&p);
    printf("Entre the value of rate of intrest\n");
    scanf("%f",&r);
    printf("Entre the value of time\n");
    scanf("%f",&t);
    i=(p*r*t)/100;
    a=p+i;
    printf("total intrest %f\n",i);
    printf("total amount to be paid is %f",a);
    return 0;
}