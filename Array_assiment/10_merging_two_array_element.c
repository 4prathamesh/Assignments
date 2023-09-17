#include<stdio.h>
int main()
{
    int i,n;

    printf("enter the size of two array: \n");
    scanf("%d",&n);
    int a[n],b[n],c[10];

    printf("enter the first array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the second array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

//     merging 
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
        c[i+n]=b[i];            
    }
// sorting 
    for(i=0;i<(n+n);i++)
    {
        for(int j=i+1;j<(2*n);j++)
        if(c[i]<c[j])
        {
            int temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }
    }

    printf("merged array in decending order: \n");
    for(i=0;i<n+n;i++)
    {
        printf("%d ",c[i]);
    }
return 0;
}