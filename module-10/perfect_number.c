/*Write a program to input any number from user and check whether the given number is perfect number or not.*/
/*testcase:
Proper divisors of 6 are 1, 2, 3-->1+2+3=6*/
#include <stdio.h>
int main()
{
  int res=0;
	int num;
  scanf("%d",&num);
  for(int i=1;i<=num/2;i++)
  {
	if(num%i==0)
    {
      res=res+i;
    }
  }
  if(res==num)
  {
    printf("yes");
  }
  else 
    printf("no");
    return 0;
}