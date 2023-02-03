/*Write a function insert(int a[], int T, int n, int pos) which takes four parameters i.e. an array, an integer T, an integer n and another integer pos.*/
//The function must insert the number n at index pos of array a of size T.
/* input:4
1 2 3 5
4 3*/

/*output:1 2 3 4 5*/
#include<stdio.h>
int insert(int arr[], int size, int n, int pos)
{
  for(int i=size;i>pos;i--)
  {
	arr[i]=arr[i-1];
  }
  arr[pos]=n;
}
int main()
{
  int t,arr[100],n,pos;
  scanf("%d",&t);
  int i;
  for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
  scanf("%d%d",&n,&pos);
  insert(arr,t,n,pos);
  for(i=0;i<=t;i++)
    printf("%d ",arr[i]);
  return 0;
}