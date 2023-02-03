/*Write a program to generate and print the first n terms of the Fibonacci sequence where n >=1.*/
#include<stdio.h>
void fib_sequence(int n) {
  // Write your code here
  long int arr[n];
  arr[0]=0;
  arr[1]=1;
  for(int i=2;i<n;i++)
  {
    arr[i]=arr[i-2]+arr[i-1];
  }
  for(int i=0;i<n;i++)
  {
    printf("%ld\n",arr[i]);
  }
}
int main()
{
   int n;
   scanf("%d",&n);
   fib_sequence(n);
}