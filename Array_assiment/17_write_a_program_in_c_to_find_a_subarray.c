//writ a program in c to find a subarray with given sum form th given array

#include<stdio.h>
int main()
{
   int i,j,k,sum,userS,size;
   printf("enter the size of array\n");
   scanf("%d",&size);
   int a[size];

   printf("enter the array element :\n");
   for(i=0;i<size;i++)
   {
      scanf("%d",&a[i]);
   }

   printf("enter the sum :\n");
   scanf("%d",&userS);

   // sub array 
   for(i=0;i<size;i++)
   {
      sum=0;
      for(j=i;j<size;j++)
      {
         sum=sum+a[j];
         if(sum==userS)
         {
            printf("[%d..%d]--{",i,j);
            for(k=i;k<=j;k++)
            {
               printf(" %d ",a[k]);
            }
            printf("}\n");
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
enter the sum :
7
[0..1]--{ 3  4 }
[0..5]--{ 3  4  -7  1  3  3 }
[3..5]--{ 1  3  3 }
[4..6]--{ 3  3  1 }
*/