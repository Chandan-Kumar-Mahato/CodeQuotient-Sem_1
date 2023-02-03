/*Write a program to check how many palindrome numbers are present between between a and b. Palindrome Number are those numbers which are equal to their reverse. For Example 757 is a palindrome number, where 754 is not a Palindrome number.

*/
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int num1,num2,temp=0,res=0,count=0;
  scanf("%d %d",&num1,&num2);
  for(int i=num1;i<=num2;i++)
  {
    temp=i;
    res=0;
    while(temp!=0)
    {
      res=res*10 + temp%10;
      temp=temp/10;
    }
    if(res==i)
    {
     count++;
    }
  }
  printf("%d",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}