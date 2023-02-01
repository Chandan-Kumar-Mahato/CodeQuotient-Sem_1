// reverse and original number are equal or not
/*entered four digit number and check weather the reverse and original of that number are equal or not*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    int temp,rev,r,res,count=3;
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        rev=rev+r*pow(10,count);
        count--;
        temp=temp/10;

    }
    if(num==rev)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }





    return 0;
}