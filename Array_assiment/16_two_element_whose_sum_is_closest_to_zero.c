//find two element whose sum is closest to zero???????
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,sum1,max,m,n,z;
    int a[]={38,44,63,-51,-35,19,84,69,4,-46};
    max=a[0]+a[1];
    m=0;
    n=1;
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            sum1=a[i]+a[j];
            z=abs(0-sum1);

            if(max>z)
            {
                max=z;
                m=i;
                n=j;
            }

        }
    }
    printf("\n%d %d %d",max,a[m],a[n]);
    return 0;
}