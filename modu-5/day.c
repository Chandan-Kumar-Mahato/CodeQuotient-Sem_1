// you must print the day when number is entered by the user
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num==1)
    {
        printf("Sunday");
    }
    else if(num==2)
    {
        printf("MOnday");
    }
    else if(num==3)
    {
        printf("Tuesday");
    }
    else if(num==4)
    {
        printf("wednesday");
    }
    else if(num==5)
    {
        printf("Thursday");
    }
    else if(num==6)
    {
        printf("friday");
    }
    else if(num==7)
    {
        printf("Saturday");
    }
    else 
    {
        printf("Enter the valid day number");
    }


    

    return 0;
}