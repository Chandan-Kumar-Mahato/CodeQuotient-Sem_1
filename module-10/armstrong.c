/*Write a program to input any number from user and check whether the given number is armstrong or not.*/
#include <stdio.h>
int main()
{
  int n,temp,count=0,res=0,r;
  scanf("%d",&n);
  temp=n;
  while(temp!=0)
  {
    count++;
    temp=temp/10;
  }
  temp=n;
  while(temp!=0)
  {
	r=temp%10;
    res=res+pow(r,count);
    temp=temp/10;
  }
  if(n==res)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
    return 0;
}