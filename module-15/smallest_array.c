// you have to find the smallest elements in array
/*input-->The first line of input contains an integer N, that denotes the size of array
The next N lines contains an integer, the array elements*/
/*output--->Print the minimum element of array
*/
#include<stdio.h>
/*
 * Complete the function smallestInArray
 * @params
 *   a -> array of integers
 *   n -> size of array
 * @returns
 *   minimum element of array
 */
int smallestInArray (int a[], int n){
  // Write your code here
  int min=a[0];
  for(int i=0;i<n;i++)
  {
    if(a[i]<min)
    {
      min=a[i];
    }
  }
  return min;
}
int main(){
  	int n;
  	scanf("%d",&n);
    int a[n], i; 
    for(i=0;i<5;i++)
      scanf("%d",&a[i]);
  
    printf("%d\n",smallestInArray (a,n));
    return 0;
}