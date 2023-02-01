// task is to find the compound intrest
/**/
#include<stdio.h>
#include<math.h>
int main()
{
    float p,intrest=0,time,rate;
    scanf("%f%f%f",&p,&rate,&time);
    intrest=p*pow(1+rate/100,time);
printf("%0.1f",intrest);



    return 0;
}