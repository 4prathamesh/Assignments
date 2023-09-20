/*44. Sparse matrix
Write a program in C to accept a matrix and determine whether it is a sparse matrix.
Test Data:
Input the number of rows of the matrix: 2
Input the number of columns of the matrix: 2 
Input elements in the first matrix:
element-[0],[0]: 0
element-[0],[1]: 0 
element-[1],[0]: 1
element-[1],[1]: 0
Expected Output:
The given matrix is sparse matrix. 
There are 3 number of zeros in the matrix
*/
#include<stdio.h>
int main()
{
    int a[5][5],i,j,count=0;
    printf("enter the matrix element:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

//      check the matrix is sparse or not 
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>2)
    {
        printf("\nThe given matrix is sparse matrix.");
        printf("\nThere are %d number of zero element ",count);
    }
    else{
        printf("\nThe given matrix is not sparse matrix.");
    }

    return 0;
}