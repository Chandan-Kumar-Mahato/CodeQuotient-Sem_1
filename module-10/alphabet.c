//Write a program to print first n alphabets from a to z using loop.
#include <stdio.h>
int main()
{
  int n;
  char c='a';
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    printf("%c ",c);
    c++;
  }

    return 0;
}