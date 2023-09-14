// ceiling in sorted array
#include<stdio.h>
int main()
{
    int i,a[10],s_no,count=0;
    printf("enter the array element");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("any number for find the ceiling in array:\n");
    scanf("%d",&s_no);

    for(i=0;i<5;i++)
    {
        if(s_no<=a[i])
        {
            printf("the number is ceiling number:%d\n ",a[i]);
            break;
        }
        else
        {
            count++;
        }
    }
    if(count>=5)
    {
        printf("element is not found: \n");
    }

    return 0;
}