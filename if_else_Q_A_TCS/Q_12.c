#include<stdio.h>

int main()
{
    int N=10,k=5,C;
    printf("sold no of candis: ");
    scanf("%d",&C);

    if (C>k || C>N)
    {
        printf("invilade input");
    }
    else
    {

        printf("number of candise sold: %d\n",C);
        printf("number of candise available : %d",N-C);
    }
    return 0;

}