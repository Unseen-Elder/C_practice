#include<stdio.h>
int main()
{
    FILE *fptr1,*fptr2;
    fptr1=fopen("s1.txt","r");
    fptr2=fopen("s1new.txt","w");
    char a;
    a=fgetc(fptr1);
    while(a!=EOF)
    {
        putc(a,fptr2);
        a=fgetc(fptr1);
    }
    fclose(fptr1);

    fptr1=fopen("s1.txt","r");
    a=fgetc(fptr1);
    while(a!=EOF)
    {
        putc(a,fptr2);
        a=fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}