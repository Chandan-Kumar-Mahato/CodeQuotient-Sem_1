//Write a program to find the 2nd maximum element in an array.

//Note: Print 0, if all the values are same.

/*input--->The first line of input contains an integer N, denoting the size of array.
The second line contains N space separated integers, denoting the array elements.*/


/*output--->For each test case, print the 2nd maximum element in the list.
*/

/*constraints:  2 <= N <= 10^5
 -1000 <= arr[i] <= 1000*/

 #include <stdio.h>
/* Include other headers as needed */
int main()
{
	int size,secmax,pos=0;
  scanf("%d",&size);
  int arr[size];
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  int max=arr[0];
  for(int i=0;i<size;i++)
  {
    if(arr[i]>0 || arr[i]<0)
    {
      for(int j=i+1;j<size;j++)
      {
        if(arr[i]==arr[j])
        {
          arr[j]=0;
        }
      }
    }
  }
  for(int i=0;i<size;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
      pos=i;
    } 
  }
  arr[pos]=-40;
  secmax=arr[0];
  for(int i=0;i<size;i++)
  {
    if(arr[i]>secmax)
    {
      secmax=arr[i];
    }
  }
  printf("%d",secmax);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}