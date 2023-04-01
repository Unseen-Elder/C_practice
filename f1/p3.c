#include<stdio.h>
int main()
{
    float r;
    float pi=3.14;
    float h;
    printf("Entre the value of radius\n");
    scanf("%f", &r);
    printf("Entre the value of height\n");
    scanf("%f", &h);
    printf("Area of circle is %f\n",pi*r*r);
    printf("Volume of cylinder is %f",pi*r*r*h);
    return 0;
}