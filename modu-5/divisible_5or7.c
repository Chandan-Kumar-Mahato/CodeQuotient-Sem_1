// task to know weather the number is divisible by 5 or 7
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%5==0 && num%7==0)
    {
        printf("ITs divisible by both 5 and 7");
    }
    else if(num%5==0)
    {
        printf("Its divisible by 5");
    }
    else if(num%7==0)
    {
        printf("Its divisible by 7");
    }



    return 0;
}