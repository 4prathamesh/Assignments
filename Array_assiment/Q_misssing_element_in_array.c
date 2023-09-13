#include<stdio.h>
int main()
{
    int a[]={1,5,9,13,17},i,j;
    printf("array element is :\n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]----->%d\n",i,a[i]);
    }

    printf("missing element in ascendind order sorted data:\n");
    for(i=0;i<5;i++)
    {
        for(j=a[i]+1;j<a[i+1];j++)
        {
            printf("%d ",j);
        }
    }
    return 0;
}

/*******************************OUT PUT***********************************************
array element is :
a[0]----->1
a[1]----->5
a[2]----->9
a[3]----->13
a[4]----->17
missing element in ascendind order sorted data:
2 3 4 6 7 8 10 11 12 14 15 16
*/