// print all the odd number in the interval
#include<stdio.h>
void printOdds(int a, int b)
{
  for(int i=a;i<=b;i++)
  {
    if(i%2!=0)
    {
      printf("%d ",i);
    }
  }
}
int main()
{
  int a,b;
  scanf("%d%d", &a,&b);
  printOdds(a, b);
  return 0;
}