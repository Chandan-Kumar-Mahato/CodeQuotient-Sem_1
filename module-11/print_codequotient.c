
/*Write a program that accepts 2 numbers as input. Then it prints “Code” instead of the number for multiples of three and for the multiples of five it prints “Quotient”, and if number is multiple of both three and five it prints “CodeQuotient” for each number inclusive both the entered numbers in new lines. If the numbers are not multiple of both 3 or 5 , then print the number.*/
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int num1,num2;
  scanf("%d %d",&num1,&num2);
  for(int i=num1;i<=num2;i++)
  {
     if((i%3==0) && (i%5==0))
    {
      printf("CodeQuotient\n");
    }
   else if(i%3==0)
    {
      printf("Code\n");
    }
    else if(i%5==0)
    {
      printf("Quotient\n");
    }
    else 
    {
      printf("%d\n",i);
    }
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}