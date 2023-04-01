#include<stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;
void display(date d1);
int compare(date d1,date d2);

int main()
{
    date d1={21,8,1961};
    date d2={21,8,1961};
    int a;

    display(d1);

    display (d2);

    a=compare(d1,d2);

    if(a==1)
    {
        printf("Date 2 comes before date 1 \n");
    }
    if(a==-1)
    {
        printf("Date 1 comes before date 2 \n");
    }
    if(a==0)
    {
        printf("Both dates are same \n");
    }
    return 0;
}
void display(date d1)
{
    printf("Date is : %d/%d/%d\n",d1.date,d1.month,d1.year);
}
int compare(date d1,date d2)
{
    if(d1.year>d2.year)
    {
        return 1;
    }
    if(d1.year<d2.year)
    {
        return -1;
    }

    if(d1.month>d2.month)
    {
        return 1;
    }
    if(d1.month>d2.month)
    {
        return -1;
    }

    if(d1.date>d2.date)
    {
        return 1;
    }
    if(d1.date>d2.date)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}