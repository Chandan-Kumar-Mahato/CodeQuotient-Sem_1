// Task is to search the element in array and if present say present
/*input:
3 10 20 4 7 4 5
5
*/
/*output:
1*/
#include <stdio.h>
/* Include other headers as needed */
int main(){
	int num;
  int count=0;
  int arr[7];
  for(int i=0;i<7;i++)
  {
    scanf("%d",&arr[i]);
  }
  scanf("%d",&num);
  for(int i=0;i<7;i++)
  {
    if(arr[i]==num)
    {
	  count++;
    }
  }
  if(count==0)
  {
    printf("Not Present");
  }
  else
  {
	printf("%d",count);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
