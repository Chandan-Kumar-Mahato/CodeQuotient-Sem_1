/*Write a function cube( int n) to calculate the cube of a number.*/
#include<stdio.h>
void cube(int n)
{
  printf("%d",n*n*n);
}
int main()
{
    int num;
    scanf ("%d", &num);
    cube(num);
    return 0;
}