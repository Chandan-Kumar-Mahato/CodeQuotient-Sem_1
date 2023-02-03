// you have to count the total number of negative element in array
/*input:
4
1 2 3 -5*/
/*output:
    1*/
#include<stdio.h>
int count(int arr[], int T)
{
  int count=0;
  for(int i=0;i<T;i++)
  {
    if(arr[i]<0)
    {
	count++;
    }
  }
  return count;
}
int main()
{
  int t,arr[100],n,pos;
  scanf("%d",&t);
  int i;
  for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
  printf("%d",count(arr,t));
  return 0;
}