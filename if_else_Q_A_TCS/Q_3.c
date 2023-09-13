#include<stdio.h>
#include<conio.h>
int main()
{
    int Fs,Ss,Ts;
    printf("enter the size ");
    scanf("%d%d%d",&Fs,&Ss,&Ts);

    if(Fs==Ts && Fs==Ss)
    {
        printf("Triangle is equilateral triangle");
    }
    else if(Fs==Ss || Fs==Ts || Ss==Ts)
    {
        printf("triangle is isoceles trangle");
    }
    else{
        printf("Trangle is scalene trangle ");
    }
    return 0;

}