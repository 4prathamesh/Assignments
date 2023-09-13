#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    double deter,root1,root2;
    printf("enter the value of a,b and c\n");
    scanf("%lf%lf%lf",&a,&b,&c);

    //determinant=deter
    deter=b*b-4*a*c;

    if(deter>0)
    {
        root1= (-b + sqrt(deter))/2*a;
        root2= (-b - sqrt(deter))/2*a;

        printf("root1 is : %lf\n",root1);
        printf("root2 is : %lf\n",root2);
    }
    else if(deter==0)
    {
        root1=root2=-b/(2*a);
        printf("two root is %lf \n",root1);
    }
    else{
        double reale_p=-b/(2*a);
        double imaginary=sqrt(-(deter));
        printf("%lf + i %lf\n",reale_p,imaginary);
        printf("%lf - i %lf\n",reale_p,imaginary);

    }
    return 0;
}