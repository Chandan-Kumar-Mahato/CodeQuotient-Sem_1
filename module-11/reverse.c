// task is to reverse a number
/*input:1234
output-->4321*/
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int num,res=0;
  scanf("%d",&num);
  while(num!=0)
  {
    res=res*10 + num%10;
    num=num/10;
  }
  printf("%d",res);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}