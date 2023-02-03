/*Write a function factorial ( int n ) to calculate the factorial of a number.*/
void factorial(int n)
{
  int fact=1;
  for(int i=1;i<=n;i++)
  {
    fact =fact*i;
  }
  printf("%d",fact);
}
int main()
{
    int num;
    scanf ("%d", &num);
    factorial(num);
    return 0;
}