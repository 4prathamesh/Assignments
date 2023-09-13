//car_two_velwr
#include<stdio.h>
int main()
{
    int weel,vecial;
    int T_W,F_W;
    printf("enter the weel");
    scanf("%d",&weel);
    printf("enter the weel");
    scanf("%d",&vecial);

    if(weel%2==0 && weel%4==0 && vecial%2==0)
    {
        F_W=weel/4;
        T_W=F_W-weel;
        printf("F_W%d and T_w%d",F_W,T_W);
        

    }
    return 0;
}