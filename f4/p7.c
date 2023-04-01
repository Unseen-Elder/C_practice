#include<stdio.h>
#include<math.h> // library function
int main()
{
    float side;
    printf("entre the value of side\n");
    scanf("%f",&side);
    
    printf("The are of square of side %f is %f\n",side,pow(side,2)); // remember pow returns double , hence we have to use %f specifier
    
    return 0;
}