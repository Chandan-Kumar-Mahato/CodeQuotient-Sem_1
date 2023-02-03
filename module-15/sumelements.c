//Write a program to find the sum of all the elements of an array.
/*Array must be of size 10*/

#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int sum=0;
	int arr[10];
  for(int i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<10;i++)
  {
    sum +=arr[i];
  }
  printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}