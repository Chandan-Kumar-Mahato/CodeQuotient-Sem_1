/*Write a program to input a character from user and check whether the given character is vowel or consonant.*/

#include <stdio.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  
  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='U' || ch=='I' || ch=='E' || ch=='O')
  {
    printf("vowel");
  }
  else 
  {
	printf("consonant");
  }

    return 0;
}