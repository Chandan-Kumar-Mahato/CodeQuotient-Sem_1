// This take data from user which is too big positive and negative both
/*each test case contain one float one long integer one unsigned long integer.
Tc 1:1.278456 -256352 4294967295
tc 2:111.123456 1256352 4294912345
tc 3:555.000000 -123456 123456789
tc 4:123.11 -2147483645 4258967456*/
#include<stdio.h>
int main()
{
    float a;
    long int m;
    unsigned long int us;
    scanf("%f %ld %lu",&a,&m,&us);
    printf("%f %ld %lu",a,m,us);


    return 0;
}