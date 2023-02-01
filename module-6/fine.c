/*A library charges a fine for every book returned late. For first 3 days the fine is 10 rupees, for 4-10 days fine is 20 rupees and above 10 days fine is 50 rupees. If book is returned after 30 days membership will be cancelled.*/

#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int days;
    int fine;
    scanf("%d", &days);
    if (days <= 3)
    {
        printf("10");
    }
    else if (days >= 4 && days <= 10)
    {
        printf("20");
    }
    else if (days > 10 && days <= 30)
    {

        printf("50");
    }
    else if (days > 30)
    {
        printf("Membership cancelled");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}