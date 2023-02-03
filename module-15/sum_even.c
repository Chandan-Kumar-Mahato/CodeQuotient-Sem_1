//Finding the sum of even indexing of an array
/*INput:First line contains an integer t denoting the total number of elements.
Second line contains t integer elements.*/
#include<stdio.h>
int evenSum(int a[], int T)
{
  int sum=0;
  for(int i=0;i<T;i++)
  {
    if(i%2==0)
    {
      sum +=a[i];
    }
  }
  return sum;
}
int main()
{
  int t,arr[100],n;
  scanf("%d",&t);
  int i;
  for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
  printf("%d ",evenSum(arr,t));
  return 0;
}