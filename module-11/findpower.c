/*Write a program to find the value of one number raised to the power of another.

*/
#include <stdio.h>
#include<math.h>
/* Include other headers as needed */
int main()
{
  int n,rais,res=0;
  scanf("%d %d",&n,&rais);
  res=pow(n,rais);
  printf("%d",res);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}