/*Complete the function table (n,m) to calculate the multiplication table of the number n up to m.*/
#include<stdio.h>
void table( int n, int m){
  // Write your code here
 for(int i=1;i<=m;i++)
 {
   printf("%d\n",n*i);
 }
}
int main()
{
    int n, m;
    scanf ("%d", &n);
    scanf ("%d", &m);
    table(n, m);
    return 0;
}