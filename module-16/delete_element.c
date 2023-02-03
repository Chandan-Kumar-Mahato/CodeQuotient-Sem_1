// you have to delete the specified element in array
/*input-->First line contains an integer t denoting the total number of elements.
Second line contains t integer elements.
Third line contains an integer n.*/

/*output-->Print the final array elements separated by space.
*/

#include<stdio.h>
int delete(int arr[], int T, int n)
{
  for(int i=0;i<T;i++)
  {
    if(arr[i]==n)
    {
      arr[i]=0;
    }
  }
  for(int i=0;i<T-1;i++)
  {
    if(arr[i]==0)
    {
      while(i<T-1)
      {
        arr[i]=arr[i+1];
        i++;
      }
    }
  }
}
int main()
{
  int t,arr[100],n;
  scanf("%d",&t);
  int i;
  for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
  scanf("%d",&n);
  delete(arr,t,n);
  for(i=0;i<t-1;i++)
    printf("%d ",arr[i]);
  return 0;
}
