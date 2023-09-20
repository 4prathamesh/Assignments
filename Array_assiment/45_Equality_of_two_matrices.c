/*
Equality of two matrices
Write a program in C to accept two matrices and check whether they are equal
Test Data: 
Input Rows and Columns of the 1st matrix : 2 2
Input Rows and Columns of the 2nd matrix : 2 2 
Input elements in the first matrix:
element-[0],[0]:1
element-[0],[1]:2
element-[1],[0]:3 
element-[1],[1]:4
Input elements in the second matrix:
element-[0][0]:1 
element-[0][1]:2
element-[1][0]:3 
element [1][1]:4
Expected Output: 
The first matrix is:
1 2
3 4
The second matrix is:
1 2
3 4
The Matrices can be compared:
Two matrices are equal.
*/
#include<stdio.h>
int main()
{
    int i,j,a[5][5],b[5][5],flage=0;
    //                           scan matrix
    printf("enter the first metrix element: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second metrix element: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //                print matrix
    printf("The first matrix is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    //                          compare
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if( (a[i][j]) != (b[i][j]) )
            {
                flage=1;
                break;
            }
        }
    }
    if(flage)
    {
        printf("The Matrices can be compared:\nTwo matrices are not equal.");
    }
    else
    {
        printf("The Matrices can be compared:\nTwo matrices are equal.");
    }

}