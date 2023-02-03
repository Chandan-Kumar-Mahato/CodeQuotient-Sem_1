// you have to find the minimum elements in array list
/*input--->First line contains the N denoting total elements.
Second line contains N integers.*/
/*output---->Print the minimum element in the array.*/
#include <stdio.h>
int main()
{
  int min;
  int T;
  scanf("%d",&T);
  int a[T];
  for(int i=0;i<T;i++)
  {
	scanf("%d",&a[i]);
  }
  min=a[0];
  for(int i=0;i<T;i++)
  {
	if(a[i]<min)
    {
      min=a[i];
    }
  }
  printf("%d",min);
    return 0;
}