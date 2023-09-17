//writ a program in c to find a subarray with given sum form th given array?

#include<stdio.h>
int main()
{
    int i,s,sum,a[]={3,4,-7,1,3,3,1,-4};

    printf("array is: \n");
    for(i=0;i<8;i++)
    {
        printf("a[%d]----> %d \n",i,a[i]);
    }

    printf("enter the element for check sum:\n");
    scanf("%d",&sum);   //7

    printf("subarray:\n");
    for(i=0;i<7;i++)
    {
        s=a[i]+a[i+1];   //7
        for(j=i+1;j<8;j++)  //j=
        {
            if(s==sum)     //7==7
            {
                s=s+a[j];   //7+4=11
            }
            else{
                s=s+a[j];
            }

        }
    }

    return 0;

}

/*******************************OUT PUT***********************************************

array is: 
a[0]----> 3 
a[1]----> 4
a[2]----> -7
a[3]----> 1
a[4]----> 3
a[5]----> 3
a[6]----> 1
a[7]----> -4
enter the starting point and ending point
3
7
[3...7]----{ 1  3  3  1  -4 }
*/