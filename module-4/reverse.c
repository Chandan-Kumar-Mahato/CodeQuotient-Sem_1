// task is to reverse four digit number
/*4562--->2654*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    int r,rev=0,count=0,temp;
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    count=count-1;
    while(num!=0)
    {
        r=num%10;
    rev=rev+r*pow(10,count);
        num=num/10;
        count--;
    }
    printf("%d",rev);
    return 0;
}