// you have to return multiple values from array
/*input-->First line contains an integer t denoting the total number of elements.
Second line contains t integer elements.*/

/*output--->Print the minimum, maximum and sum of array elements separated by space.*/
#include<stdio.h>
/* use the array a and store the minimum, maximum and sum of array elements in respective pointer variables.
As these are used in main functions, so just store the values in them. */
void multiReturnArray(int *a, int size, int *min, int *max, int *sum)
{
  *min=a[0];
  *max=a[0];
  for(int i=0;i<size;i++)
  {
    *sum += a[i];
    if(a[i]>*max)
    {
      *max=a[i];
    }
  }
  for(int i=0;i<size;i++)
  {
	if(a[i]<*min)
    {
      *min=a[i];
    }
  }
  return *min;
  return *max;
  return *sum;
}
int main()
{
  int t,arr[100],n;
  int min, max, sum;
  scanf("%d",&t);
  int i;
  for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
  multiReturnArray(arr,t,&min, &max, &sum);
  printf("%d %d %d", min, max, sum);
  return 0;
}