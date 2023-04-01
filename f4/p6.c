#include<stdio.h>
void change(int a);
int main()
{
    int a=10;

    printf("The value of 'a' before change is %d\n",a);

    change(a); //misnomer

    printf("The value of 'a' after change is %d\n",a);
    
    return 0;
}
void change(int a)
{
    a=20;
}