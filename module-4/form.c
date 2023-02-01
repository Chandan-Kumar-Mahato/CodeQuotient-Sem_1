// this is the program to form a four digit number
/*example:if user input 1 2 3 4 --->1234 is your output*/
#include<stdio.h>
int main()
{

int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("%d",a*1000+b*100+c*10+d);


    return  0;
}