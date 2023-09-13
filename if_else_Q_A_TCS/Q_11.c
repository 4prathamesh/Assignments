#include<stdio.h>
int main()
{
    //total no of vehicle =V
    //total no of wheels = W
    int v,w,TW,FW;
    printf("enter the vehicle and wheels");
    scanf("%d%d",&v,&w);

    if(w%2==0 && v<w && w>=2)
    {

    printf("four wheeler is :%d\n",FW=w/4);
    printf("two wheeler is :%d\n",TW=v-FW);
    }
    else
    {
        printf("invalide input");
    }
    return 0;

    // if(W%2=0 && W>=2 && V<W)
    // {
    //     printf("")
    // }


}