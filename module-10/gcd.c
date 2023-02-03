//Write a program to find greatest common divisor (GCD) of two numbers.


#include <stdio.h>
int main()
{
	int a,b,gcd=0;
scanf("%d %d",&a,&b);
  if(b<0)
  {
    gcd=-1*a;
  }
  else
  {
   for(int i=1;i<=a;i++)
  {
    if(a%i==0 && b%i==0)
    {
     gcd=i;
    }
  } 
  }
  printf("%d",gcd);
    return 0;
}