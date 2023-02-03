// you have to reverse and print the array using pointer
/*input-->First line contains an integer t denoting the total number of elements.
Second line contains t integer elements.*/
/*output--->Print the array elements separated by space after reversal.*/
#include<stdio.h>
void reverseArray(int *a, int size)
{
  int temp=0;
  for(int i=0;i<size/2;i++)
  {
    temp=a[size-1-i];
    a[size-1-i]=a[i];
    a[i]=temp;
  }
}
int main()
{
  int t,arr[100],n;
  scanf("%d",&t);
  int i;
  for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
  reverseArray(arr,t);
  for(i=0;i<t;i++)
    printf("%d ",arr[i]);
  return 0;
}
