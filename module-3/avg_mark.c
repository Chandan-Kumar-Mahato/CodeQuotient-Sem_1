// get 5 mark from user and print the aggregate and % of mark
#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    int avg,res,total;
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    total=n1+n2+n3+n4+n5;
    res=total/5;
    printf("%d %d",total,res);



    return 0;
}