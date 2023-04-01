#include<stdio.h>
int main()
{
    int n,i=0;
    FILE *fptr;
    fptr = fopen("Table.txt","w");

    printf("Entre the value of n \n");
    scanf("%d",&n);

    while(i!=10)
    {
        fprintf(fptr,"%d X %d = %d\n",n,(i+1),n*(i+1));
        i++;
    }

    fclose(fptr);

    return 0;
}