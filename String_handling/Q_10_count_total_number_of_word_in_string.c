#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter the string:\n");
    gets(str);

    int count=1,i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ' && str[i+1]!=' ')
        {
            count++;
        }
        i++;
    }
    printf("count=%d",count);
    return 0; 
}