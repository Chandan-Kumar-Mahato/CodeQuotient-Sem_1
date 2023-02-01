/*Given a set of n students examination marks ( in the range 0 to 100) make a count of the number of students that passed the examination. A pass is awarded for all marks of 50 and above.*/
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,marks;
  int count=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
	scanf("%d",&marks);
    if(marks>=50)
    {
      count++;
    }
  }
  printf("%d",count);
  

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}