// input is unit
//calculate total electricity bill
#include<stdio.h>
int main()
{
    float unit,T_e_bell,amt,T_b,a;
    printf("enter the unit of electricity bill \n");
    scanf("%f",&unit);
    
    if(unit>0 && unit<=50)
    {
        amt=unit*0.50;
        printf("bell in amount is : %f\n",amt);
    }
    else if(unit>50 && unit<=150)
    {
        amt=((unit - 50) * 0.75) + (50 * 0.50);
        printf("bell in amount is : %f\n",amt);
    }
    else if(unit>150 && unit<=250)
    {
        amt=(((unit - 150) * 1.20 )+ (50 * 0.50) + (100 * 0.75));
        printf("belll in amout is : %f\n",amt);
    }
    else{
        amt=(((unit - 250) * 1.50) + (50 * 0.50) + (100 * 0.75) + (100 * 1.20));
        printf("bell in amount is : %f\n",amt);
    }

    printf("additional suechaege is :%f\n",a=amt*0.2);
    printf("total net bell is :%f\n",T_b=amt+a);
    return 0;
}