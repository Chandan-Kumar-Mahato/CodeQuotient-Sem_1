/*Write a program to generate and print all the primes in the first n positive integers. */
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int num,flag=1;
  scanf("%d",&num);
  for(int i=2;i<=num;i++)
  {
    flag=1;
    {
      for(int j=2;j<=sqrt(i);j++)
      {
        if(i%j==0)
        {
          flag=0;
        }
      }
      if(flag==1)
      {
        printf("%d\n",i);
      }
    }
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}