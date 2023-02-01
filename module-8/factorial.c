/*Given a number n, compute n factorial (written as n!) where n >=0.

A factorial of a number n is the product of all natural numbers from 1 to n.

For Example , factorial of 4 (4!) = 1*2*3*4 = 24*/
#include <stdio.h>
long factorial(int num)
{
    long fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    long fact;
    scanf("%d", &n);
    fact = factorial(n);
    printf("%ld", fact);
}