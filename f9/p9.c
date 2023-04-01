#include<stdio.h>
int main()
{
    int n,i=0,sum=0,num;
    FILE *fptr;
    fptr = fopen("sum.txt","w");

    printf("Entre the numbers you want sum of \n");
    scanf("%d",&n);
    int arr[n];
    printf("Entre each number\n");

    while(i<n)
    {
        scanf("%d",&num);
        fprintf(fptr,"%d ",num);
        i++;
    }

    fclose(fptr);

    fptr = fopen("sum.txt","r");
    i=0;
    while(i<n)
    {
        fscanf(fptr,"%d",&arr[i]);
        sum=sum+arr[i];
        i++;
    }

    printf("Sum of all integers in file is : %d\n",sum);

    return 0;
}