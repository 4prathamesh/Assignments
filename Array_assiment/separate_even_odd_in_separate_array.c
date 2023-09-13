#include<stdio.h>
int main()
{
    int i,size;

    printf("enter the array size :\n");
    scanf("%d",&size);

    int arr[size];

    printf("enter the array element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array element:\n");
    for(i=0;i<size;i++)
    {
        printf("arr[%d]--->%d\n",i,arr[i]);
    }

    printf("even number is :\n");
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("odd number is :\n");
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;

}