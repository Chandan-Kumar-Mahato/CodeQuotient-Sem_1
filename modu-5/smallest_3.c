// task is to find the smallest of three number
/*45 12 89---->12 is output*/
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("lowest:%d",a);
    }
    else if(b<a && b<c)
    {
        printf("lowest:%d",b);
    }

    else if(c<a && c<b)
    {
        printf("lowest:%d",c);
    }



    return 0;
}