//Write a program to copy the elements of an array a to the another array b in reverse order.

/*input:Assume the size of array as 10. Each test case will have 10 elements in ten different lines.*/
#include <stdio.h>
/* Include other headers as needed */
int main()
{
 int arr[10];
  int b[10];
  for(int i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<10;i++)
  {
    b[i]=arr[9-i];
  }
  for(int i=0;i<10;i++)
  {
    printf("%d\n",b[i]);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
