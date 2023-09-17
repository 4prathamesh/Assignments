#include<stdio.h>
int main()
{
    int i,count=0,size;

    printf("enter the array size:\n");
    scanf("%d",&size);

    int a[size];
    printf("enter the array element :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            for(int j=i+1;j<size;j++)
            {
                if(j!=0)
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    }

    printf("array element :\n");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
        
    }
    return 0;
    
}