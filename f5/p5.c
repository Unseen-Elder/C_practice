#include<stdio.h>
void ten_times(int *i);
int main()
{
    int a=5;

    printf("The value of 'a' before change is %d\n",a);
    ten_times(&a);
    printf("The value of 'a' after change is %d\n",a);

    return 0;
}
void ten_times(int *i)
{
    *i=10*(*i);
}