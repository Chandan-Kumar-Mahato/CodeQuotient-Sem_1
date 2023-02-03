/*Write a function formNumber() that reads in a set of n single digits and convert them into a single integer.*/
#include <stdio.h>
int formNumber(int num)
{
  int digit=0,number=0;
  for(int i=1;i<=num;i++)
  {
    scanf("%d",&digit);
    number=number*10 +digit;
  }
  return number;
}
int main(){
  // Write your code here
  int n,res=0;
  scanf("%d",&n);
 res=formNumber(n);
  printf("%d",res);
  return 0;
}