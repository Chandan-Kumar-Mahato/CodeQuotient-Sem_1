//Write a program to find the sum of all the digits of a number.

#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int cas;
  int res=0,rem;
  int digit;
  scanf("%d",&cas);
  for(int i=1;i<=cas;i++)
  {
    res=0;
    scanf("%d",&digit);
    while(digit!=0)
    {
      rem=digit%10;
      res=res+rem;
      digit=digit/10;
    }
    printf("%d\n",res);
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}