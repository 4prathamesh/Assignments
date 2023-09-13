#include<stdio.h>
int main()
{
    int xx; // credit score is xx
    printf("enter the credit score ");
    scanf("%d",&xx);

    if(xx>=750)
    {
        printf("yes"); //you can access CRED program
    }
    else{
        printf("No"); 
    }
    return 0;
}