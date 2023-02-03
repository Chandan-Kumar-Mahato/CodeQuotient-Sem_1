// you have to delete the duplicate from a sorted array

/*suppose:{7, 7, 18, 18, 18, 18, 21, 39, 39, 42, 42, 42}*/
/*output-->{7, 18, 21, 39, 42}*/
#include<stdio.h>
void removeDuplicates(int arr[], int *size) {
  // Write your code here
  int j=0;
  int count=0;
 	for(int i=0;i<*size;i++)
    {
      if(arr[i]!=0)
      for(int j=1+i;j<*size;j++)
      {
        if(arr[i]==arr[j])
        {
          arr[j]=0;
        }
      }
    }
  for(int i=0;i<*size;i++)
  {
    if(arr[i]>0 || arr[i]<0)
    {
      arr[j]=arr[i];
      j++;
    }
    if(arr[i]==0)
    {
      count++;
    }
  }
  *size=*size-count;
}
int main()
{
    int i, size = 0;
    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++) 
        scanf("%d", &arr[i]);

    removeDuplicates(arr, &size);
    for (i = 0; i < size; i++) 
        printf("%d\n", arr[i]);
  
    return 0;
}