#include<stdio.h>
#define p printf
int main()
{
    float simple_interest,principal_amount,rate_per_annum,time;
    p("Enter the value of principal amount=\n");
    scanf("%f",&principal_amount);
    p("Enter the interest rate per annum=\n");
    scanf("%f",&rate_per_annum);
    p("Enter the value of time period=\n");
    scanf("%f",&time);
    simple_interest=(principal_amount*rate_per_annum*time)/100;
    p("Total simple amount=%f",&simple_interest);
    return 0;
}

