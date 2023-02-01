// task is to sum the first and last digit of 4 digit number
#include<Stdio.h>
int main()
{
    int num,first,last;

    scanf("%d",&num);
    first=num/1000;
    last=num%10;
    printf("%d",first+last);





    return 0;
}