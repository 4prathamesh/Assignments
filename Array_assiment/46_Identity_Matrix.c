/*
Identity Matrix
Write a program in C to check whether a given matrix is an identity matrix.
Test Data:
Input number of Rows for the matrix :3 
Input number of Columns for the matrix :3
Input elements in the first matrix: 
element - [0],[0]:1
element - [0],[1]:0
element - [0],[2]:0
element - [1],[0]:0
element - [1],[1]:1 
element - [1],[2]:0
element - [2],[0]:0
element - [2],[1]:0
element - [2],[2]:1 
Expected Output:
The matrix is:
1 0 0
0 1 0
0 0 1
The matrix is an identity matrix
*/
#include<stdio.h>
int main()
{
    int i,j,a[3][3],flage=0,count=0;
    printf("enter the matrix element:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        //printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j && a[i][j]!=1)
            {
                flage=1;
                break;
            }
            else if(i!=j && a[i][j]!=0)
            {
                flage=1;
                break;
            }
        }
    }
    if(flage)
    {
        printf("the matrix is not IDENTITY matrix ");
    }
    else
    {
        printf("the matrix is identity matrix");
    }
    return 0;
}