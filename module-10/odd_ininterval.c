/*Write a program to print all odd numbers from a to b (inclusive) using loop.*/
#include <stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++)
  {
    if(i%2!=0)
    {
      printf("%d ",i);
    }
  }
    return 0;
}