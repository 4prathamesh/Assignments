#include<stdio.h>
int main()
{
    int xx,yy;
    printf("enter the cab service charge:");
    scanf("%d%d",&xx,&yy);

    if(xx>yy)
    {
        printf("choice first cab");
    }
    else if(xx==yy)
    {
        printf("choice any");
    }
    else{
        printf("choice second ");
    }
    return 0;
}