#include<stdio.h>
float average(int a, int b,int c); // average is a function which takes a,b,c as input and return a float as an output.
int main()
{
    float a;
    a = average(2,8,10); //function call
    printf("the value of average is %.3f",a); // %.3f will give upto 3 decimal places.
    return 0;
}
float average(int a, int b,int c) // function defination
{
    float avg;
    avg=(a+b+c)/3.0;
    return avg;
}
// variables in average function and int main can be same it wont effect program