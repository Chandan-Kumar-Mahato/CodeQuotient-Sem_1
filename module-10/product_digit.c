//Write a program that takes a positive number N and produces an output that is the product of its digits.
#include <stdio.h>
int main()
{
  int num;
  int res=1;
  scanf("%d",&num);
  while(num!=0)
  {
    res=res*(num%10);
    num=num/10;
    
  }
  printf("%d",res);

  return 0;
}