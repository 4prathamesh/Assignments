#include<stdio.h>
int main()
{
    int i,arr[10],diff,s_miss;

    printf("enter the array element :\n");
    for(i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }

    
    for(i=0;i<8;i++)
    {
        diff=arr[i]+1;
        if(diff!=arr[i+1])
        {
            s_miss=arr[i]+1;
            break;
        }
    }
    printf("\nThe missing smallest element is:%d",s_miss);

    return 0;
}
    