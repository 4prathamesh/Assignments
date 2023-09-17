//?????????????????????????????????????????????
#include<stdio.h>
int main()
{
    int i,j,conut=0;
    int a[5];

    printf("enter the array element :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    conut++;
                    printf("%d,%d\n",a[j],a[i]);
                }
        }
    } 
    printf("\nthe number of inversion can be formed from the array is : %d",conut);
    return 0;
}