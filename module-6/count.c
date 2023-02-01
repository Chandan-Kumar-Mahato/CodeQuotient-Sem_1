// Write a program to input amount from user and print minimum number of notes (Rs. 2000, 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.

// input format:each test case contains an integer denoting the amount.
//output format:Print the minimum notes of each denomination separated by space.

/*sample: input:2050
output:1 0 0 1 0 0 0 0 0*/
#include<stdio.h>
int main()
{
    // int n2000=0,n500=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    // int amou;
    // scanf("%d",&amou);
    // n2000=amou/2000;
    // amou=amou-n2000*2000;
    // n500=amou/500;
    // amou=amou-n500*500;
    // n100=amou/100;
    // amou=amou-n100*100;
    // n50=amou/50;
    // amou=amou-n50*50;
    // n20=amou/20;
    // amou=amou-n20*20;
    //  n10=amou/10;
    // amou=amou-n10*10;
    //  n5=amou/5;
    // amou=amou-n5*5;
    //  n2=amou/2;
    // amou=amou-n2*2;
    //  n1=amou;
    //  printf("%d %d %d %d %d %d %d %d %d",n2000,n500,n100,n50,n20,n10,n5,n2,n1);
    int arr[9]={2000,500,100,50,20,10,5,2,1};
    int amount,rem=0;
    scanf("%d",&amount);
    for(int i=0;i<9;i++)
    {
        rem=amount/arr[i];
        amount=amount-rem*arr[i];
        printf("%d ",rem);

    }

    return 0;
}