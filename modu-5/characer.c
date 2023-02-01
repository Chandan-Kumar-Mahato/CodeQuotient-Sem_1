// task to know if user enter any character is character or not
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>=97 && ch<=122) || (ch>=57 && ch<=92))
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}
