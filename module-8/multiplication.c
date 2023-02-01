/*Write a program to calculate the multiplication table of a number n up to m.

*/

#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int start,stop;
  scanf("%d %d",&start,&stop);
  for(int i=1;i<=stop;i++)
  {
    printf("%d\n",i*start);
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}