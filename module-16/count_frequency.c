//The function must print the frequency of each element in the array as shown below.

/*input-->First line contains an integer t denoting the total number of elements.
Second line contains t integer elements.*/

/*output-->Print the frequencies as shown.
*/


#include<stdio.h>
void frequency(int a[], int T)
{
  int count=0;
  for(int i=0;i<T;i++)
  {
    count=1;
    if(a[i]>0)
    {
    for(int j=i+1;j<T;j++)
    {
      if(a[i]==a[j])
      {
        a[j]=0;
        count++;
      }
    }
      printf("%d-%d\n",a[i],count);
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
  frequency(arr,t);
  return 0;
}
