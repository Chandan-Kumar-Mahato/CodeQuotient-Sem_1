/*Write a program to determine whether the character is a capital letter, a small case letter, a digit or a special symbol.*/
// user will enter the symbol you have to find it as uppercase,lowercase or special symbol

#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
    {
        printf("Digit");
    }
    else if(ch>=65 &&  ch<=95)
    {
        printf("UPPERCASE");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("LOWERCASE");
    }
    else if((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<127))
    {
        printf("Speacial digit");
    }


    return 0;
}