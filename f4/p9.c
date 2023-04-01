#include<stdio.h>
float far(float a);
int main()
{
    float c;

    printf("Entre the Temp in degree celcius\n");
    scanf("%f",&c);

    printf("Temp in degree farhenite is %f",far(c));
    return 0;
}
float far(float a)
{
    float f;

    f = (9.0/5)*a +32;

    return f;

}