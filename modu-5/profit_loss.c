// task to find the profit or loss 
/*cp and sp are entered by the user*/
#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    scanf("%d %d",&cp,&sp);
    if(cp>sp)
    {
        loss=cp-sp;
        printf("loss:%d",loss);
    }
    else if(sp>cp)
    {
        profit=sp-cp;
        printf("profit:%d",profit);
    }
    else
    {
        printf("Equal");
    }



    return 0;
}