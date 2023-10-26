// write a c program to find last occurrence of a character in given sting
#include<stdio.h>
#include<string.h>

void occur(char str[],char ch)
{
    int i,index,flag=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==ch)
        {
            index=i;
            flag=1;
        }
    }
    if(flag)
    {
        printf("last occurrence of a character %c is %d",ch,index);
    }
    else{
        printf("character is not found\n");
    }
}

int main()
{
    char ch,str[20];
    printf("enter the string:\n");
    gets(str);
    printf("enter the character:\n");
    scanf("%c",&ch);
    occur(str,ch);
    return 0;
}