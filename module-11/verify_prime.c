/*Given an integer n, the task is to check whether that the given integer is a prime number or not*/


/*
 * Complete the function 'verifyPrime'
 * @params
 *   n ->number which is to be checked from primality test
 *
 * @return
 *   1 if the number is a prime number else 0
 */
int verifyPrime(int n) {
  // Write your code here
  int flag=1;
  if(n==0 || n==1)
  {
    flag=0;
  }
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      flag=0;
      break;
    }
  }
  if(flag==1)
  {
    return 1;
  }
  else 
    return 0;
}
int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
      scanf("%d",&no);
     
	if (verifyPrime(no))
	  printf("PRIME\n"); 
    else 
  		printf("NOT PRIME\n"); 
   }
}