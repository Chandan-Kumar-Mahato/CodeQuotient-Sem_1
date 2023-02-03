// count the number of duplicate elements in array
/*input-->The first line contains an integer n, the size of the numbers array.
The next n lines contain an integer describing the value of numbers[i] where 0 ≤ i < n.*/

/*output--->Print an integer denoting the number of non-unique (duplicate) values in the numbers array.
*/

#include<stdio.h>
/*     
 * Complete the 'howManyDuplicates' function below.
 * @params
 *   n ->  Size of the numbers array
 *   numbers -> Integer array in which the number of duplicate values is to be found
 *
 * @return
 *   An integer, denoting the number of non-unique (duplicate) values 
 *   in the numbers array passed as an argument.
 */
int howManyDuplicates(int n, int numbers[]) {
  // Write your code here
  int count=0;
  int max=numbers[0];
  for(int i=0;i<n;i++)
  {
    if(numbers[i]>max)
    {
      max=numbers[i];
    }
  }
  int temp[max+1];
  for(int i=0;i<max+1;i++)
  {
    temp[i]=0;
  }
  for(int i=0;i<n;i++)
  {
    temp[numbers[i]]++;
  }
  for(int i=0;i<max+1;i++)
  {
    if(temp[i]>1)
    {
      count++;
    }
  }
  return count;
}
int main() {
  int n;
  scanf("%d", &n);
  int numbers[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &numbers[i]);
  printf("%d", howManyDuplicates(n, numbers));
	  
  return 0;
}