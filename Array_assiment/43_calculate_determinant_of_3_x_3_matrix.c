/*43. calculate determinant of a 3 x 3 matrix?????????????????
Write a program in C to calculate determinant of a 3 x 3 matrix.
Test Data:
Input elements in the first matrix :
element - [0],[0]: 1
element - [0],[1]: 0
element - [0],[2]: -1
element - [1],[0]: 0
element - [1],[1]: 0
element - [1],[2]: 1
element - [2],[0]: -1 
element - [2],[1]: -1
element - [2],[2]: 0 
Expected Output:
The matrix is: 
1  0  -1
0  0   1
-1 -1  0
The Determinant of the matrix is: 1
*/
#include<stdio.h>
int main()
{
    int i,j,a[10][10];
    printf("enter the element in matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j])
            {

            }
        }
    }

    

    return 0;
}
