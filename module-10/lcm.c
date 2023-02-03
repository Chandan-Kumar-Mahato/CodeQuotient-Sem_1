/*Write a program to find Lowest Common Multiple (LCM) of two numbers. The Lowest Common Multiple (LCM) of two integers a and b is a smallest positive integer that exactly divides two numbers.*/

#include<stdio.h>
int main()
{
  int x,y,num,deno,gcd,lcm,remainder=0;
  scanf("%d %d",&x,&y);
  num=(x>y)?x:y;
  deno=(x<y)?x:y;
  remainder=num%deno;
  while(remainder!=0)
  {
    num=deno;
    deno=remainder;
    remainder=num%deno;
  }
  gcd=deno;
  lcm=(x*y)/gcd;
  printf("%d",lcm);
  return 0;
}