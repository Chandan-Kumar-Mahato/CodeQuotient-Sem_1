// task to convert days to year and month and days
#include<stdio.h>
int main()
{
    int days,year,week;
    scanf("%d",&days);
    year=days/365;
    days=days-365*year;
    week=days/7;
    days=days-7*week;
    printf("%d %d %d",year,week,days);


    return 0;
}