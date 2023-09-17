#include<stdio.h>
int main()
{
    int i,a[5],index,diff,d;

    printf("enter the array element: ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    //max
    int max;
    for(i=1;i<6;i++)
    {
        
    }
    printf("max=%d",max);
    printf("\nindex=%d",index);

    d=a[0]-a[index];
    for(i=0;i<index;i++)
    {
        diff=a[i]-a[index]; 
        if(diff>d)
        {
            d=diff;
        }
    }
    printf("\nelement which provide max difference is: %d  \n",d);

    return 0;
}