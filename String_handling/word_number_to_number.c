#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[20];
    int i,j,k;
    printf("enter the mobile number in word \n");
    gets(str);
    int len=strlen(str);
   // printf("%d\n",len);
    for(i=0;i<len+1;)
    {
        for(j=i;str[j]!='0';j++)
        {
            if(str[j]==' ' || str[j]=='\0')
            {
                int p=0;
                for(k=i;k<j;k++)
                {
                    str1[p]=str[k];
                    p++;
                } 
                str1[p]='\0';
                if(strcmp(str1,"one")==0)
                {
                    printf("1 ");
                }
                else if(strcmp(str1,"two")==0)
                {
                    printf("2 ");
                }
                else if(strcmp(str1,"three")==0)
                {
                    printf("3 ");
                }
                else if(strcmp(str1,"four")==0)
                {
                    printf("4 ");
                }
                else if(strcmp(str1,"five")==0)
                {
                    printf("5 ");
                }
                else if(strcmp(str1,"six")==0)
                {
                    printf("6 ");
                }
                else if(strcmp(str1,"seven")==0)
                {
                    printf("7 ");
                }
                else if(strcmp(str1,"eight")==0)
                {
                    printf("8 ");
                }
                else if(strcmp(str1,"nine")==0)
                {
                    printf("9 ");
                }
                else if(strcmp(str1,"zero")==0)
                {
                    printf("0 ");
                }
                //printf(" %s",str1);
                break;
            }
        }
        i=j+1;
    }
    return 0;
}