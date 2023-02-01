/*Write a program to print the n lines of the below pyramid*/
/*
1
12
123
1234
12345
*/
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
	for(int j=1;j<=i;j++)
    {
	printf("%d",j);
    }
    printf("\n");
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}