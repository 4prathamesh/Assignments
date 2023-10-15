//program to print an array
#include<stdio.h>
int i,size;
void print(int *p)
{
    printf("array is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",p[i]);
    }
}
int main()
{
    printf("enter the array size:\n");
    scanf("%d",&size);
    int a[size];
    printf("enter the array element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    print(a);
    return 0;
}