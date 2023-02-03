/*Write a program to input binary number from user and convert to octal number system. For example,*/
//If we enter 001001, which is 9 in decimal and 11 in octal, then you should print 11.
//condn-->Print -1, if input is not a binary number.
// #include <stdio.h>
// #include<math.h>
// int main()
// {
//   int i=0,dummy=0;
//   int count=0,r,dec=0,temp;
//   long long bin;
//   scanf("%lld",&bin);
//   temp=bin;
//   while(temp!=0)
//   {
//     r=temp%10;
//     if(r>1)
//     {
//       dummy=-1;
//       break;
//     }
//     count++;
//     temp=temp/10;
//   }
//   r=0;
//   while(bin!=0)
//   {
//     r=bin%10;
//     dec=dec + r*pow(2,i);
//     i++;
//     bin=bin/10;
//   }
//   if(dummy==-1)
//   {
//     printf("-1");
//   }
//   else
//   printf("%o",dec);
//     return 0;
// }
#include <stdio.h>
#include<math.h>
int main()
{
  long long int bin,remain=0,dec=0,i=0,count=0,r=0,temp=0,oct=0;
  scanf("%lld",&bin);
  while(bin!=0)
  {
    remain=bin%10;
    if(remain>1)
    {
      break;
    }
    dec=dec + remain*pow(2,i);
    i++;
    bin=bin/10;
  }
temp=dec;
  while(temp!=0)
  {
    count++;
    temp=temp/10;
  }
  for(int i=0;i<=count;i++)
  {
    r=dec%8;
    oct = oct + r*pow(10,i);
    dec=dec/8;
  }
  if(oct==0)
  {
    printf("-1");
  }
  else
  {
    printf("%lld",oct);
  }
    return 0;
}