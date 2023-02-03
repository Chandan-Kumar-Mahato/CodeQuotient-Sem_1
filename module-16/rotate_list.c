// you have to follow below instruction
/*input:First line will contain the number of test cases. Each test case will contain 3 lines. First line of the test case will contain a number N = number of elements in the array (1 <= N <= 50). Next line will contain N space separated integers. The third line will contain an integer R = number of shifts in rotation. It is possible that R is greater than N.*/

/*output--->Print one line of output for each test case with the integers in the rotated array printed as space separated list.*/
// note:There should be no space after the last element.
/*
input___>
3
7
1 2 3 4 5 6 7
3
9
3 5 2 1 7 5 9 15 11
10
1
5
13
*/

/*output:
4 5 6 7 1 2 3
5 2 1 7 5 9 15 11 3
5


*/
#include <stdio.h>
/* Include other headers as needed */
void rotate(int arr[],int size,int pos)
{
  int temp[size];
  for(int i=0;i<size;i++)
  {
    temp[i]=arr[(i+pos)%size];
  }
  for(int i=0;i<size;i++)
  {
    printf("%d",temp[i]);
    if(i<size-1)
    {
      printf(" ");
    }
  }
  printf("\n");
}
int main()
{
  int tstcse;
  scanf("%d",&tstcse);
  for(int i=1;i<=tstcse;i++)
  {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
      scanf("%d",&arr[i]);
    }
    int pos;
    scanf("%d",&pos);
    rotate(arr,N,pos);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
