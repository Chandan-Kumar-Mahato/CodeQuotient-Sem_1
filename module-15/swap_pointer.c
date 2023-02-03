/*Write a function void swap(int *n1, int *n2) which will receive two integer pointers as arguments and swap there values.*/
#include<stdio.h>
void swap(int *n1, int *n2)
{
  int temp;
  temp=*n1;
  *n1=*n2;
  *n2=temp;
}

int main()
{
  int n1,n2;
  int *p1,*p2;
  p1=&n1;
  p2=&n2;
  scanf ("%d%d",p1,p2);
  swap(p1,p2);
  printf("%d %d",*p1,*p2);
  return 0;
}