// you have to count the total number of even and odd elements in array
/*input:First line contains an integer t denoting the total number of elements.
Second line contains t integer elements.*/

//output------>Print the count of even and odd elements in the array.
#include<stdio.h>
void count(int a[], int T)
{
  int even=0,odd=0;
  for(int i=0;i<T;i++)
  {
    if(a[i]%2==0)
    {
      even++;
    }
    else
      odd++;
  }
  printf("%d %d",even,odd);
}
int main()
{
  int t,arr[100],n;
  scanf("%d",&t);
  int i;
  for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
  count(arr,t);
  return 0;
}