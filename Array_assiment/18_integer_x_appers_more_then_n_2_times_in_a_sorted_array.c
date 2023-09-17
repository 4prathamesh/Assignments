#include<stdio.h>
int main()
{
    int i,count=0,value,size;

    printf("enter the array size:\n");
    scanf("%d",&size);
    int a[size];

    printf("enter the array element: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

//     sorting array
    for(i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]= a[j];
                a[j]=temp;
            }
        }
    }

// 
    printf("enter the value for search:\n");
    scanf("%d",&value);

    for(i=0;i<size;i++)
    {
        if(value==a[i])
        {
            count++;
        }
    }
    if( count> (size/2) )
        {
            printf("\nInteger %d appers more then %d time ",value,size/2);
        }
    else
        {
            printf("\nInteger %d appers less then %d time ",value,size/2);
        }


    return 0;
}