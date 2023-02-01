/*Write a program to calculate the sum of the first n terms of the below series*/
#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    //   for(int i=1;i<=n;i++)
    //   {
    // 	sum +=i;
    //   }
    int i = 1;
    while (i != n + 1)
    {
        sum += i;
        i++;
    }
    printf("%d", sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}