#include<stdio.h>
#define p printf
void avgAndSum(float,float,float*,float*);
int main()
{
	float a=6;
	float b=423;
	float sum,avg;
	avgAndSum(a,b,&sum,&avg);
	p("The value of sum=%d and the value of average=%f",sum,avg);
	return 0;
}
void avgAndSum(float a,float b,float *ptr1,float *ptr2)
{
	*ptr1=a+b;
	*ptr2=(a+b)/2;
}
