/*42. upper triangular matrix
Write a program in C to print or display upper
triangular matrix
Input the size of the square matrix: 3 
Input elements in the first matrix :
element - [0],[0]: 1
element - [0],[1]: 2
element - [0],[2]: 3
element - [1],[0]: 4
element - [1],[1]: 5
element - [1],[2]: 6
element - [2],[0]: 7
element - [2],[1]: 8 
element - [2],[2]: 9
Expected Output:
The matrix is : 
1 2 3
4 5 6
7 8 9
Setting zero in upper triangular matrix
1 0 0
4 5 0
7 8 9 
*/
#include<stdio.h>
int main()
{
    int i,j,a[3][3];

    printf("enter the matrix element :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nthe matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    printf("\nSetting zero in upper triangular matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j>=i+1)
            {
                a[i][j]=0;
                printf(" %d",a[i][j]);
            }
            else
            {
                printf(" %d",a[i][j]);
            }
            
        }
        printf(" \n");
    }
}