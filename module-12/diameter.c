//Write a program to input radius of circle from user and find diameter and area of the given circle using functions.
#include<stdio.h>
float getDiameter(float n)
{
  float diameter;
  diameter=n*2;
  return diameter;
}
float getArea(float n)
{
  float area;
  area=3.14159*n*n;
  return area;
}

int main()
{
  float num;
  scanf ("%f", &num);
  printf("%.2f\n%.2f",getDiameter(num),getArea(num));
  return 0;
}