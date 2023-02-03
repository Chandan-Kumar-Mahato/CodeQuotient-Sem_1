//reverse the array using pointer
/*input-->Input consists of 10 lines , in each line contains an integer 
*/
/*output--->Print the array elements each in new line

*/
#include<stdio.h>
void reverseArray (int a[], int n){
  // Write your code here
  int temp=0;
  for(int i=0;i<n/2;i++)
  {
    temp=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=temp;
  }
}
int main()
{ 
    int a[10], i; 
    for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
    }
  
    reverseArray (a,10);
  
    for(i=0;i<10;i++)
    {
      printf("%d\n",a[i]);
    }
 
    return 0;
}