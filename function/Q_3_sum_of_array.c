// calculate sum of array 
#include<stdio.h>
int size,i,s;
void sum(int *p)
{
    for(i=0;i<size;i++)
    {
        s=p[i]+s;
    }
    printf("sum is =%d",s);
}
int main()
{
    printf("enter the size of array:\n");
    scanf("%d",&size);
    int a[size];
    printf("enter the array element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a);
}