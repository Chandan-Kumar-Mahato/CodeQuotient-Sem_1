/*Write a program to find whether the year is leap or not?

A year is considered a leap year if it is perfectly divisible by 4. Years that are perfectly divisible by 100 (for example, 2000, 2100, 2200) are exceptions. Such a year is a leap year only if it is also perfectly divisible by 400.*/
#include <stdio.h>
int main()
{
    int year;
  scanf("%d",&year);
  if(year%400==0)
  {
printf("Leap Year1");

  }
  else if(year%100==0)
  {
printf("Not a Leap Year2");
  }
  else if(year%4==0)
  {
printf("Leap Year3");
  }
  else 
  {
    printf("Not a Leap Year4");
  }

    return 0;
}