#include<stdio.h>
void slice(char st[], int m, int n);
int main()
{
    char *str;
    int x,y;

    printf("Entre the string : \n");
    gets(str);

    printf("Entre the value of x : \n");
    scanf("%d",&x);

    printf("Entre the value of y : \n");
    scanf("%d",&y);

    slice(str,x,y);

    printf("The new string is : \n");
    puts(str);

    return 0;
}
void slice(char st[], int m, int n)
{
    int i;
    char temp;

    for(i=0;i<(n-m);i++)
    {

        temp=st[m+i-1];
        st[i] = temp;

    }
    st[i+1]='\0';
}
