#include<stdio.h>
int main()
{
    int i,arr[10],no,count=0;

    printf("enter the array element :\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nenter the element for check the ceiling and floor:\n");
    scanf("%d",&no);
    for(i=0;i<6;i++)
    {
        if(no<=arr[i])
        {
            printf("ceiling is: %d\t",arr[i]);
            printf("floor is : %d",arr[i-1]);
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