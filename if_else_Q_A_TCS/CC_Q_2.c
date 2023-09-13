//current valume is xx
//after the change the valume is yy

#include<stdio.h>
int main()
{
    int xx,yy;
    printf(" enter the valume ");
        scanf("%d",&xx);

    printf("enter the incres value ");
        scanf("%d",&yy);
    if (xx<100 && yy<100)
    {
        if(xx>yy)
        {
            printf("valume is decreases by %d",xx-yy);
        }
        else
        {
            printf("valume is incresesby %d",yy-xx);
        }

    }
    else{
        printf("invalid input");
    }
    return 0;
    

}