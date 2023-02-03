//If an array contains n elements then write a program to check whether a[0] = a[n-1], a[1] = a[n-2] and so on.
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int count=0;
	int arr[10];
  for(int i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<10;i++)
  {
    if(arr[i]==arr[9-i])
    {
      count++;
    }
  }
  if(count==10)
  {
    printf("Equal");
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
