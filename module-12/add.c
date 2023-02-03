// Add two number using function
/*
 * Complete the function 'add()'
 * @params
 *  a,b -> integers to be added
 * @return
 *  an integer , sum of the numbers passed
 */
int add (int a , int b){
  // Write your code here
  return a+b;
}
int main()
{
    int a,b;
    scanf ("%d", &a);
    scanf ("%d", &b);
    printf("%d", add(a,b));
    return 0;
}