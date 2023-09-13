//N is friends
//M is the max no of student 
//K already enrolled in the course
#include<stdio.h>
int main()
{
    int n,m,k,a;
    printf("friends who wish to enroll in course");
    scanf("%d",&n);
    printf("max no of student enrole in corse");
    scanf("%d",&m);
    printf("already enrolled in the course");
    scanf("%d",&k);

    a=m-k;

    if(n>a)
    {
        printf("NO");
    }
    else{
        printf("Yes");
    }
return 0;

}