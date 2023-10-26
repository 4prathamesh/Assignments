// we want to give string and one character and check thas character
// fistr find the index of char in str

#include<stdio.h>
#include<string.h>

int main()
{
    char ch,str[20];
    printf("enter the string :\n");
    gets(str);
    printf("enter the charcter:\n");
    scanf("%c",&ch);

    int i=0,index,flag=0;

    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            index=i;
            flag=1;
            break;
        }
        i++;
    }
    if(flag)
    {
        printf("first occurrence of %c character is %d",ch,index+1);
    }
    else
    {
        printf("character is not found");
    }
    return 0;
}