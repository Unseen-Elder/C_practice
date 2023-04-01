#include<stdio.h>
void encrypt(char st[]);
void decrypt(char st[]);
int main()
{
    char *str;

    printf("Entre the string : \n");
    gets(str);

    encrypt(str);

    printf("The encrypted string is: \n");
    puts(str);

    decrypt(str);
    printf("The original string was :\n");
    puts(str);

    return 0;
}
void encrypt(char st[])
{
    int a,i=0;
    while(st[i]!='\0')
    {
        a=(int)(st[i]);
        a=a+1;
        st[i]=(char)(a);
        i++;
    }
    st[i]='\0';
}
void decrypt(char st[])
{
    int a,i=0;

    while(st[i]!='\0')
    {
        a=(int)(st[i]);
        a=a-1;
        st[i]=(char)(a); 
        i++; 
    }
    st[i]='\0';
}