// you have to move element in array so that pos and neg are together

#include<stdio.h>
void moveElements(int arr[], int n) {
  // Write your code here
  int temp[n];
  int j=0;
  for(int i=0;i<n;i++)
  {
    temp[i]=arr[i];
    if(arr[i]>=0)
    {
      arr[j]=arr[i];
      j++;
    }
  }
  for(int i=0;i<n;i++)
  {
    if(temp[i]<0)
    {
      arr[j]=temp[i];
      j++;
    }
  }
}
int main()
{
    int i, size = 0;
    scanf("%d", &size);

    int arr[size];
    for( i = 0; i < size; i++) 
        scanf("%d", &arr[i]);

    moveElements(arr, size);
    for (i = 0; i < size; i++) 
        printf("%d\n", arr[i]);
  
    return 0;
}
