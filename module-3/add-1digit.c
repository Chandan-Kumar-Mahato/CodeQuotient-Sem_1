// add 1 to each digit of any number entered by the user

// number must be only four digit
/*1234-->2345
6789--->7890*/
#include <stdio.h>
int main() // 1234--->
{
    int num;
    // int r,res,rf;
    int a, b, c, d;
    scanf("%d", &num);
    printf("This is the number entered : %d\n", num);
    // while(num!=0)
    // {
    //     r=11 + (num%10);
    //     rf=(r%10);
    //     res=res + rf*10;

    //     num/10;
    // }
    d = 11 + (num % 10);
    d = (d % 10);
    num = num / 10;
    c = 11 + (num % 10);
    c = (c % 10);
    num = num / 10;
    b = 11 + (num % 10);
    b = (b % 10);
    num = num / 10;
    a = 11 + (num % 10);
    a = (a % 10);
    printf("%d", a * 1000 + b * 100 + c * 10 + d);

    return 0;
}
