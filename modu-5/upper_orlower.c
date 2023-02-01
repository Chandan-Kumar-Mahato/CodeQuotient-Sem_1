// find the character is uppercase or lowercase
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=57 && ch<=92)
    {
        printf("Uppercase");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("Lowercase");
    }
    return 0;
}