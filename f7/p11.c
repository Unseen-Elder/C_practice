#include<stdio.h>
#include<string.h>
void copy(char st1[],char st2[]);
int main()
{
    char str1[25];
    char str2[25];

    printf("Entre string 1 :\n");
    gets(str1);

    copy(str1,str2);

    printf("String 2 after copy is : \n");

    puts(str2);

    return 0;
}
void copy(char st1[],char st2[])
{
    int i=0;
    while(st1[i]!='\0')
    {
        st2[i]=st1[i];
        i++;
    }
    st2[i]='\0';

}