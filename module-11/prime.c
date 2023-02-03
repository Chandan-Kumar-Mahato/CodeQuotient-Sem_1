/*Write a program to generate and print first m prime numbers in the first n positive integers. */
#include <stdio.h>
#include<math.h>
/* Include other headers as needed */
int main()
{
  int num,stop,flag=1,count=1;
  scanf("%d %d",&num,&stop);
  for(int i=2;i<=num;i++)
  {
    flag=1;
    {
      for(int j=2;j<=sqrt(i);j++)
      {
        if(i%j==0)
        {
          flag=0;
          break;
        }
      }
      if(flag==1 && stop>0)
      {
        printf("%d\n",i);
        stop--;
      }
    }
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}