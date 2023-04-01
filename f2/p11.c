#include<stdio.h>
int main()
{
    // 97-122 is lower case ascii values
    // if constant char then it is enclosed in ''
    // if variable char then we can give it any name.
    char ch;

    printf("Enter your character\n");
    scanf("%c",&ch);

    if(ch>=97 && ch<=122)
    {
        printf("%c is a lowercase\n",ch);
    }
    else
    {
        printf("%c is a not lowercase\n",ch);
    }
    return 0;
}