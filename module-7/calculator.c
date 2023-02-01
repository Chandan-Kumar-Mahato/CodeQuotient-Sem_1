/*Write a program to create menu driven calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case. The calculator should input two numbers and an operator from user. It should perform operation according to the operator entered and must take input in given format.*/
#include <stdio.h>
int main()
{
  float num1,num2;
  char op;
  scanf("%f %c %f",&num1,&op,&num2);
  switch(op)
  {
    case '+':
      {
        printf("%0.2f",num1+num2);
        break;
      }
    case '-':
      {
        printf("%0.2f",num1-num2);
        break;
      }
    case '*':
      {
	printf("%0.2f",num1*num2);
        break;
      }
    case '/':
      {
        printf("%0.2f",num1/num2);
        break;
      }
      
  }

    return 0;
}