// task is to find weather the number is positive negative or zero
#include<Stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("positive");

    }
    else if(num<0)
    {
        printf("negative");
    }
    else 
    {
        printf("0");
    }


    return 0;
}