// task to print the area and perimeter of rectangle
#include<stdio.h>
int main()
{
    int _l,_i3;
    int area,peri;
    scanf("%d %d",&_l,&_i3);
    area=_l*_i3;
    peri=2*(_l+_i3);
    printf("%d %d",area,peri);


    return 0;
}