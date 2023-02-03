/*Given an integer n, print all the prime factors of n.

*/
/*
 * Complete the function 'primeFactors'
 * Print all the prime factors of the number
 * @params
 *   n -> numbers whose prime factors are to be found
 */
#include<stdio.h>
void primeFactors(int n){
  // Write your code here
  while(n%2==0)
  {
    printf("2\n");
    n=n/2;
  }
  for(int i=3;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      printf("%d\n",i);
      n=n/i;
    }
  }
  if(n>2)
  {
    printf("%d\n",n);
  }
}
int main(){
	int no;
    scanf("%d",&no);
    primeFactors(no);   
   return 0;   
 }