// we take a character and string than character is in string the delete thos character

#include<stdio.h>
#include<string.h>
int main()
{
    char ch,str[20];
    printf("enter the strign :\n");
    gets(str);
    printf("enter the character:\n");
    scanf("%c",&ch);

    int len=strlen(str),i,j;

    for(i=0;i<len;i++)
    {
        if(str[i]==ch)
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
            len--;
        }
    }
    printf("string is=%s",str);
    return 0;
}