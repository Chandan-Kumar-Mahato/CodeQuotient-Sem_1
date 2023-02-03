// separate the even and odd element in separate array

/*input-->First line contains an integer t denoting the total number of elements.
Second line contains t integer elements.*/

/*output-->Print the even and odd arrays separately.
*/

#include<stdio.h>
void separate(int a[], int T)
{
  int evenc=0,oddc=0;
  for(int i=0;i<T;i++)
  {
    if(a[i]%2==0)
    {
      evenc++;
    }
    else
      oddc++;
  }
  int even[evenc];
  int odd[oddc];
  int j=0,k=0;
  for(int i=0;i<T;i++)
  {
    if(a[i]%2==0)
    {
      even[j]=a[i];
      j++;
    }
   else
   {
     odd[k]=a[i];
     k++;
   }
  }
  printf("Even:");
  for(int i=0;i<evenc;i++)
  {
    printf("%d",even[i]);
    if(i<evenc-1)
    {
      printf(" ");
    }
  }
  printf("\n");
  printf("Odd:");
  for(int i=0;i<oddc;i++)
  {
    printf("%d",odd[i]);
    if(i<oddc)
    {
      printf(" ");
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
  separate(arr,t);
  return 0;
}