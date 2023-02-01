// Sum all the digit of the number
/*Take a number and sum its digit one by one*/
#include<stdio.h>
int main()
{
    int num,res=0;
    scanf("%d",&num);
    while(num!=0)
    {
        res=res+ num%10;
        num=num/10;
    }
    printf("%d",res);
    return 0;
}