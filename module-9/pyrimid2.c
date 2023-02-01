/*Write a program to print the n lines of the below pyramid

*/
/*Important Note: Don't print spaces at the end of the row.*/
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n;
  int count=1;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
	for(int j=1;j<=i;j++)
    {
      
		printf("%d",count);
      if(i!=j)
      {
        printf(" ");
      }
      count++;
    }
    printf("\n");
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}