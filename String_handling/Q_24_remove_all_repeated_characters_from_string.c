#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter the string:\n");
    gets(str);

    int len=strlen(str);
    int i;
    for(i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                str[j]=str[j+1];
            }
        }
    }
    printf("%s",str);
    return 0;
}