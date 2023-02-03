//Adding three numbers by pointer
#include<stdio.h>
void sum(int *p1, int *p2, int *p3)
{
 printf("%d",*p1+*p2+*p3);
}
int main()
{
  int a,b,c;
  int *p1,*p2,*p3;
  p1=&a;
  p2=&b;
  p3=&c;
  scanf("%d%d%d",p1,p2,p3);
  sum(p1,p2,p3);
  return 0;
}