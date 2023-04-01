#include<stdio.h>
void SumAndAvg(int a,int b,int *sum,float *avg);
//since function can only return 1 value , we cannot get both sum and average with just one function.
int main()
{
    int a=3,b=4,sum;
    float avg;
    SumAndAvg(a,b, &sum, &avg);
    printf("the sum of 'a' and 'b' is %d\n",sum);
    printf("the avg of 'a' and 'b'is %.1f\n",avg);
    
    return 0;
}

void SumAndAvg(int a,int b,int *sum,float *avg)
{
    *sum = a+b;
    *avg=((float)*sum)/2;
}