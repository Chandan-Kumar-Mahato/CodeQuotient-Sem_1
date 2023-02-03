/*An Armstrong number is a n-digit number that is equal to the sum of the nth power of its digits. For example -*/
#include<stdio.h>
void isArmstrong(int n)
{
  int count=0,r,res=0;
  int temp=n;
  while(temp!=0)
  {
    temp=temp/10;
    count++;
  }
  temp=n;
  while(temp!=0)
  {
    r=temp%10;
    res=res+pow(r,count);
    temp=temp/10;
  }
  if(res==n)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
int main()
{
    int num;
    scanf ("%d", &num);
    isArmstrong(num);
    return 0;
}