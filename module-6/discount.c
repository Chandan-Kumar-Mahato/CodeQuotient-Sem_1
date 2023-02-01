/*Write a program to input gross amount of bill and calculate the net amount according to the below discounts:

If amount < 1000, then discount is 0%
If amount is from 1001 to 5000, then discount is 5%
If amount is from 5001 to 10000, then discount is 10%
If amount > 10000, then discount is 15%
An additional discount of 2% if bill is greater than 30000*/

#include<stdio.h>
int main()
{
    float amount;
    scanf("%f",&amount);
    if(amount<1000)
    {
        amount -=0;
    }
    else if(amount>=1001 && amount<=5000)
    {
        amount -=0.05*amount;
    }
    else if(amount>=5001 && amount<=10000)
    {
        amount -=0.1*amount;
    }
     if(amount>30000)
    {
        amount -=0.17*amount;
    }
    else if(amount>10000)
    {
        amount -=0.15*amount;
    }
    printf("%0.2f",amount);



    return 0;
}