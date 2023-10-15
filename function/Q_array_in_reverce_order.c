// 2. array in reverse order
// program to print an array in reverse odrder
#include<stdio.h>
int size,i;
void rev(int *p)
{
    int n=size-1;
    for(i=0;i<size/2;i++)
    {
        int temp=p[i];
        p[i]=p[n];
        p[n]=temp;
        --n;
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",p[i]);
    }
}
int main()
{
    printf("entr the array size:\n");
    scanf("%d",&size);
    int a[size];
    printf("enter the array element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    rev(a);
    return 0;
}