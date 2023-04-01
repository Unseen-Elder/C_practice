#include<stdio.h>
int main()
{
    int year,month,date;
    int days, leap_year=0,start=1,feb,day;

    printf("entre the year\n");
    scanf("%d",&year);

    printf("entre the month\n");
    scanf("%d",&month);

    printf("entre the date\n");
    scanf("%d",&date);
    
    while(start<year)
    {
        if((start % 4 == 0) && !( start % 100 == 0 && start % 400 != 0 ))
        {
            leap_year++;
        }
        start++;
    }
    days=(leap_year*366)+((year-leap_year-1)*365);

    if((year % 4 == 0) && !( year % 100 == 0 && year % 400 != 0 ))
    {
        feb=29;
    }
    else
    {
        feb=28;
    }

    switch (month)
    {
        case 12:
        {
            days=days+ 30 ;
        }
        case 11:
        {
            days=days+31;
        }
        case 10:
        {
            days=days+30;
        }
        case 9:
        {
            days=days+31;
        }
        case 8:
        {
            days=days+31;
        }
        case 7:
        {
            days=days+30;
        }
        case 6:
        {
            days=days+31;
        }
        case 5:
        {
            days=days+30;
        }
        case 4:
        {
            days=days+31;
        }
        case 3:
        {
            days=days+feb;
        }
        case 2:
        {
            days=days+31;
        }
        case 1:
        {
            days=days+0;
        }
    }

    days=days+date;

    day=days%7;

    switch(day)
    {
        case 0:
        {
            printf("sunday");
            break;
        }
        case 1:
        {
            printf("monday");
            break;
        }
        case 2:
        {
            printf("tuesday");
            break;
        }
        case 3:
        {
            printf("wednesday");
            break;
        }
        case 4:
        {
            printf("thursday");
            break;
        }
        case 5:
        {
            printf("friday");
            break;
        }
        case 6:
        {
            printf("saturday");
            break;
        }
    }

    return 0;
}