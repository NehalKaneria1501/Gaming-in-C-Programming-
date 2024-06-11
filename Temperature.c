#include<stdio.h>
#define p printf
int main()
{
	float c,f,result;
	p("Enter the value of celcius degree=\n");
	scanf("%f",&c);
	result=(c*1.8)+32;
	p("convert celcius to farenheit=%f\n",result);
	return 0;
}
