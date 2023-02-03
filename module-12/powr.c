//Write a function power, which will take two integers (int num, int pow) as argument and return the num raised to the power pow.
/*if pow is negative then return -1.
if pow is 0 then return 1.*/
#include<stdio.h>
int power(int num, int pow)
{
  int res=1;
  for(int i=1;i<=pow;i++)
  {
    res=res*num;
  }
  return res;
}
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d",power(a,b));
  return 0;
}