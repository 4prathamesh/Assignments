#include<stdio.h>
int main()
{
    int xx,yy;
    printf("manipulate number of guards is : ");
    scanf("%d",&xx);
    printf("number of guards is : ");
    scanf("%d",&yy);

    if(xx<100 && yy<100 && xx>=yy)
    {
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;

}