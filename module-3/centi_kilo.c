// convert centimeter to kilometer and meter
#include<stdio.h>
int main()
{
    int num1;
    float meter,kilo;
    scanf("%d",&num1);
    meter=num1/100;
    kilo=meter/1000;
    printf("meter:%f kilo:%f",meter,kilo);
    return 0;
}