#include<stdio.h>
int main()
{
    int num1,num2,num3;
    FILE *ptr;

    ptr = fopen("s2.txt","r");

    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    fclose(ptr);

    printf("The value num1 in file is %d\n",num1);
    printf("The value num2 in file is %d\n",num2);
    printf("The value num3 in file is %d",num3);

    return 0;
}