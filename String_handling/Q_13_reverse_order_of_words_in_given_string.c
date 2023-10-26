#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter the string \n");
    gets(str);

    int len=strlen(str),i,j;

    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]<str[j])
            {
                char ch=str[i];
                str[i]=str[j];
                str[j]=ch;
            }
        }
    }
    printf("rever order of word=%s",str);
}