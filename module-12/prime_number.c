// print all prime in the interval
#include<stdio.h>   
void printPrimes(int a, int b)
{
  int flag,count=0;
  for(int i=a;i<=b;i++)
  {
    flag=1;
    for(int j=2;j<=sqrt(i);j++)
    {
      if(i%j==0)
      {
        flag=0;
        break;
      }
    }
    if(flag==1)
    {
      count++;
      printf("%d ",i);
    }
  }
     if(count==0)
    {
      printf("-1");
    }
}
int main()
{
  int a,b;
  scanf("%d%d", &a,&b);
  printPrimes(a, b);
  return 0;
}