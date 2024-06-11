#include<stdio.h>
#define p printf
int main()
{
	int income;
	float tax=0;
	p("Enter your income\n");
	scanf("%d",&income);
	if(income<2500000)
	{
		p("Your income is less than 2.5 lakhs\n");
	}
	else if(income <5000000 && income>2500000)
	{
		p("Your income is between than 2.5 lakhs and 5 lakhs");
		tax=tax+0.05*(income-250000);
		tax=tax+0.2*(income-500000);
	}
	else
	{
		p("Your income is above 10 lakhs");
		tax=tax+tax+0.05*(5000000-250000);
		tax=tax+0.2*(1000000-5000000);
		tax=tax+0.3*(income-10000000);
	}
	p("Total tax to be paid is %f",tax);
	return 0;
}
