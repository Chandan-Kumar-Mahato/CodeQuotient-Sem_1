// Write a function to print the number of digits in a given number.

#include<stdio.h>
void numDigits(int n)
{
  int count=0;
  while(n!=0)
  {
	count++;
    n=n/10;
  }
  if(count==0)
printf("1");
  else
    printf("%d",count);
}
int main()
{
  int num;
  scanf ("%d", &num);
  numDigits(num);
  return 0;
}