// Rotate an array by n positions

#include<stdio.h>
int main()
{
    int i,index,size;

    printf("enter the size of array:\n");
    scanf("%d",&size);
    int a[size];
    
    printf("enter the array element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("any index value  :\n");
    scanf("%d",&index);

    //printf("from any position the value of array\n");
    printf("rotate the array element:\n")
    for(i=index;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    //printf("\nbefore 4th position the value of array:\n");
    for(i=0;i<index;i++)
    {
        printf("%d ",a[i]);
    }   

    return 0;

}