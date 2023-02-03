/*A prime number is a positive integer that is divisible only by 1 and itself. For example: 2, 3, 5, 7, 11, 13, 17,19 are prime numbers. Your task is to check whether the given number is prime or not.*/
/*
 * Complete the function 'prime()'
 * @params
 *  n -> integer to be checked for primality
 * @return
 *  an integer , 1 if the number passed is prime else 0
 */
#include<stdio.h>
int prime(int n){
  // Write your code here
  int flag=1;
  if(n==0 || n==1)
  {
    flag=0;
  }
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      flag=0;
      break;
    }
  }
  if(flag==0)
  {
    return 0;
  }
  else
    return 1;
}
int main()
{
     int test;
	 int num;
	
	scanf ("%d", &test);

    while (test != 0) 
    {
       scanf ("%d", &num);
		
		if (prime(num) == 1) 
        {
           printf("PRIME\n");

		} 
        else 
        {
            printf("NOT PRIME\n");
		}
		test--; 
	}
  
    return 0;
}