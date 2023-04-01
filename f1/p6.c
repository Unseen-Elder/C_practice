#include<stdio.h>
#include<math.h>
int main()
{
    int a=4,b=5,c;
    // a*b=c; this instruction is illegal.
    c=a*b;
    // above statement is legal.
    
    printf("The value of a+b is %d\n",a+b);
    printf("The value of a-b is %d\n",a-b);
    printf("The value of a*b is %d\n",a*b);
    //printf("The value of a*b is %d\n",(a)(b)); ---> illegal
    //printf("The value of a*b is %d\n",a.b); ---> illegal
    //printf("The value of a*b is %d\n",ab); ---> illegal
    printf("The value of a/b is %d\n",a/b);
    // a/b will give zero value because a/b, in this case will give fractional value.
    printf("The value of a/b is %f\n",a/b);
    // here also a/b will give incorrect value.
    float d=4,e=5;
    printf("The value of d/e is %f\n",d/e);
    // here we will get correct value because we are using float.
    
    
    printf("The remainder of 5/2 is %d\n",5%2);
    printf("The remainder of -5/2 is %d\n",-5%2);
    printf("The remainder of 5/-2 is %d\n",5%-2);
    printf("The remainder of -5/-2 is %d\n",-5%-2);

    // the are no operator to perform exponentiation in C
    // printf("the value of 4^5 is %d\n",4^5); ---> illegal
    // ^ is bitwise XOR operator
    // to find exponentials we need to include math.h library, then we can use pow(x,y) function.
    printf("the value of 4^2 is %d\n",pow(4,2));
    //the above equation will give wrong value becuase we have to use %f instead of %d.
    printf("the value of 4^2 is %f\n",pow(4,2));
    printf("the value of -4^2 is %f\n",pow(-4,2));
    printf("the value of 4^0.5 is %f\n",pow(4,0.5));
    printf("the value of -4^0.5 is %f\n",pow(-4,0.5));
    // we have to use complex.h library to work with complex numbers.
    
    // type conversion
    // arithmetic operation between int and int will give int
    // arithmetic operation between int and float will give float
    // arithmetic operation between float and float will give float

    printf("the value of 5+6 is %d\n",5+6);
    printf("the value of 5.1+6 is %f\n",5.1+6);
    printf("the value of 5.1+6.2 is %f\n",5.1+6.2);
    printf("the value of 5/2 is %d\n",5/2);
    printf("the value of 5/2 is %f\n",5/2);
    // here also we are getting wrong result because int and int operation will always give int
    printf("the value of 5/2 is %f\n",5/2.0);
    // here we will get correct result because 2.0 is a float.
    // when we define float b=2; then b will be stored as 2.0

    int k= (5.0/9);
    printf("the value of k is %f \n",k);
    // here k will be returned as an integer hence the last value of %f will be shown as result.

    // operator precedence in c in absence of paranthesis
    // 1st priority * / %
    // 2nd priority + -
    // 3rd priority  =
    
    int x=2,y=3;
    printf("the value of 3*x-8*y is %d\n",3*x-8*y);

    //breaking tie of operators of same priority
    printf("the value of 8*y/3*x is %d\n",8*y/3*x);
    // we will do calculations left to right
    //8*3/3*2
    //24/3*2
    //8*2
    //16, we cannot use bodmas in such cases.

    return 0;
}