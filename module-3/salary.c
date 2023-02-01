/*Write a program to calculate the gross salary of an employee. Basic salary will be provided as input and HRA is 10% of basic salary and DA is 20% of the basic salary.*/
//Gross Salary = Basic Salary + HRA + DA
/*Where HRA = 10% of basic salary and DA = 20% of Basic Salary

Input*/
#include<stdio.h>
int main()
{   
    int salary,total;
    scanf("%d",&salary);
    total=0.1*salary + 0.2*salary + salary;
   printf("%d",total);


    return 0;
}