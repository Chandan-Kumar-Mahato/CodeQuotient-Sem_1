/*Write a program to find the largest of the three numbers.*/
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a>b && a>c)
  {
    printf("%d",a);
  }
  else if(b>a && b>c)
  {
	printf("%d",b);
  }
  else if(c>a && c>b)
  {
    printf("%d",c);
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}