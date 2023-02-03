// you have to print the array using pointer
/*input-->First line contains an integer t denoting the total number of elements.
Second line contains t integer elements.*/
/*outupt--->Print the array elements separated by space.*/
#include<stdio.h>
void printArray(int *a, int size)
{
  for(int i=0;i<size;i++)
  {
	printf("%d ",*(a+i));
  }
}
int main()
{
  int t,arr[100],n;
  scanf("%d",&t);
  int i;
  for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
  printArray(arr,t);
  return 0;
}