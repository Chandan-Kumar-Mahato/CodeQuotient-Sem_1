// Swap two variable which was entered by the user
#include<stdio.h>
int main()
{
    int _n1,_n2,temp;
    printf("enter the first and second:");
    scanf("%d %d",&_n1,&_n2);
    temp=_n2;
    _n2=_n1;
    _n1=temp;
    printf("value of first:%d value of second:%d",_n1,_n2);

    return 0;
}