#include<stdio.h>
int main()
{
    //Weight=W
    int W;
    printf("enter the weight of clothes");
    scanf("%d",&W);

    if((W>0) && (W<2000))
    {
        printf("Time Estimated: 25 min");
    }
    else if((W>2000) && (W<4000))
    {
        printf("Time Estimated: 35 min");
    }
    else if ((W>4000) && (W<7000))
    {
        printf("Time Estimated: 45 min");
    }
    else 
    {
        printf("water is overflow");
    }
    return 0;
}