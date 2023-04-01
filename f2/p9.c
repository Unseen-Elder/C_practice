#include<stdio.h>
int main()
{
    float income, tax=0,taxable_income=0;
    printf("entre your annual income\n");
    scanf("%f",&income);

    if(income>=250000 && income <=500000)
    {
        taxable_income = income-250000;
        tax = taxable_income*0.05;
    }
    else if(income>500000)
    {
        taxable_income = 250000;
        tax= taxable_income*0.05;
    }

    if(income>=500000 && income <=1000000)
    {
        taxable_income = (income-500000);
        tax = tax + taxable_income*0.10;
    }
    else if(income>1000000)
    {
        taxable_income = 500000;
        tax= tax + taxable_income*0.10;
    }

    if(income>=1000000 && income <=5000000)
    {
        taxable_income = (income-1000000);
        tax = tax + taxable_income*0.20;
    }
    else if(income>5000000)
    {
        taxable_income = 4000000;
        tax= tax + taxable_income*0.20;
    }

    if(income>5000000)
    {
        taxable_income = income-5000000;
        tax = tax +taxable_income*0.3;
    }

    printf("total tax to be paid is %f",tax);

    return 0;
}