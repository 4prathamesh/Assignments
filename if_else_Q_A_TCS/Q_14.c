//N=total no of monkeys
//k= no of eatable bananas
//j= no of eatable peanuts
//m= total no of bananas
//p= total no of peanuts
#include<stdio.h>
int main()
{
    int n,k,j,m,p;
    int M_L,M_b,M_p;
    printf("enter the total no of monkeys:");
    scanf("%d",&n);
    printf("enter the no of eatable bananas:");
    scanf("%d",&k);
    printf("enter the no of eatable peanuts:");
    scanf("%d",&j);
    printf("enter the total no of bananas:");
    scanf("%d",&m);
    printf("enter the total no of peanuts:");
    scanf("%d",&p);

    // n=20,k=2,j=3,m=12,p=12

    if(k<=m && j<=p)
    {
        m=m/k;
        p=p/j;
        printf("number of monkeys left on the tree :%d",n=n-(m+p));
    }
    else{
        printf("invalide input");
    }

return 0;

}