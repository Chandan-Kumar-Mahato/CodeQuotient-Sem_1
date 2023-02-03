// Write a program to find out in a array how many elements are positive, how many are negative, how many are even and how many odd.
/*input-->Assume the size of array as 10. Each test case will have 10 elements in ten different lines.
*/
/*output--->For each input, print the number of positive, negative, even and odd elements in the array in 4 different lines ( positive in 1st line, negative in 2nd line, even in 3rd and odd in 4th line) 
*/
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int pos=0,neg=0,even=0,odd=0;
  int arr[10];
  for(int i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<10;i++)
  {
    if(arr[i]<0)
    {
      neg++;
    }
    if(arr[i]>0)
    {
      pos++;
    }
    if(arr[i]%2==0)
    {
      even++;
    }
    else
    {
      odd++;
    }
  }
  printf("%d\n%d\n%d\n%d",pos,neg,even,odd);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}