#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main()
{
    goodmorning();
    return 0;
}
void goodmorning()
{
    printf("Good Morning vipul\n");
    goodafternoon(); // calling one function into another.
}
void goodafternoon()
{
    printf("Good Afternoon vipul\n");
    goodnight();
}
void goodnight()
{
    printf("Good Night vipul\n");
}