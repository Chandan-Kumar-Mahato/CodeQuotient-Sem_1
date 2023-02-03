//check number is square or not using function
#include<stdio.h>
void isSquare(int n)
{
  int count=0;
for(int i=1;i<=n;i++)
{
  if(i*i==n)
  {
    count++;
  }
  }
  if(count>0)
  {
    printf("yes");
  }
  else
  {
    printf("no"); 
  }
}
int main()
{
    int num;
    scanf ("%d", &num);
    isSquare(num);
    return 0;
}