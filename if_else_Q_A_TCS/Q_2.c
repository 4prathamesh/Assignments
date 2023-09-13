#include<stdio.h>
int main()
{
    int ang1,ang2,ang3,total;
    printf("antr the anglue");
    scanf("%d%d%d",&ang1,&ang2,&ang3);

    total=ang1+ang2+ang3;

    if(total==180)
    {
        printf("The trangle is valid ");
    }
    else{
        printf("The trangle is invalid");
    }
    return 0;
}