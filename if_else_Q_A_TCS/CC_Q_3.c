//withdraw  x
// banck charge is 0.05
#include<stdio.h>
int main()
{
    float x,y,R;
    printf("pooja initial account balence ");
    scanf("%f",&y);
    printf("withdraw amount");
    scanf("%f",&x);

    if(y>0 && x>0 && y<=2000 && x<=2000)
    {
        printf("remining balance with charges %f",R=(y-x)-0.50);
    }
    else
    {
        printf("invaled input");
    }
    return 0;

}