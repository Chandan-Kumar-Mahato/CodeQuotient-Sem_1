/*A university calculates the grade of a student as per the below rule

Grade is A - if total marks are >= 75.

Grade is B - if total marks are >= 60 and < 75

Grade is C - if total marks are >= 55 and < 60

Grade is D - if total marks are >= 50 and < 55.

Grade is E - if total marks < 50.

Write a program to calculate and print the grade of the student.
*/
#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the marks of student:\n");
    scanf("%d",&mark);
    if(mark>= 75)
    {
        printf("A");
    }
    else if(mark>=60 && mark<75)
    {
        printf("B");
    }
    else if(mark>=55 && mark<60)
    {
        printf("C");
    }
    else if(mark>=50 && mark<55)
    {
        printf("D");
    }
    else if(mark<50)
    {
        printf("E");
    }



    return 0;
}