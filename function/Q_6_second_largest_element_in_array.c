#include<stdio.h>
int size,i;
void smax(int *p,int max,int smax)
{
    for(i=0;i<size;i++)
    {
        if(p[i]>max)
        {
            smax=max;
            max=p[i];
        }
        else if(p[i]<max && p[i]>smax)
        {
            smax=p[i];
        }
    }
    printf("smax=%d",smax);
}
int main()
{
    printf("enter array size:\n");
    scanf("%d",&size);
    int a[size];
    printf("enter the array element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=a[0];
    int sm=a[1];
    if(m<sm)
    {
        int temp=m;
        m=sm;
        sm=temp;
    }
    smax(a,m,sm);
    return 0;
}