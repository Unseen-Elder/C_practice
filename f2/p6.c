#include<stdio.h>
int main()
{
    int num;
    printf("entre a\n");
    scanf("%d",&num);
    (num<5)? printf("%d is less than 5\n",num) :printf("%d is not less than 5\n",num);
    // one line if else statement
    // condition ? if true : if false ;
    return 0;
}