// you have to rotate the array in left till the posn entered by the user
/*input-->The first line of input contains an integer N, denoting the size of the array
The second line contains N spaced integers, that denotes the elements of the array.
The third line contains an integer R, denoting how much times we have to rotate the array*/

/*output--->Print the elements of array separated by a single space.
*/
#include<stdio.h>
// Do not print anything in the function
// Just modify the given array by left rotating it R times
void rotateArray(int arr[], int N, int R) {
  // Write your code here
  int temp[N];
  for(int i=0;i<N;i++)
  {
    temp[i]=arr[(i+R)%N];
  }
  for(int i=0;i<N;i++)
  {
    arr[i]=temp[i];
  }
}
int main()
{
    int i, R,SIZE;
    scanf("%d",&SIZE); //size of an array 
    int arr[SIZE];
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &R); //number of rotations
   
    rotateArray(arr,SIZE,R);
    for(i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
