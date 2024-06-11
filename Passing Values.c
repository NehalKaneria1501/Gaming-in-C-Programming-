#include<stdio.h>
#define p printf
int sum(int,int,int);
int main()
{
	int a=5;
	int b=7;
	int c=88;
	p("The value of 5+7=%d",sum (a,b,c));
	p("The value of c=%d",c);
	return 0;
}
int sum(int a,int b,int c)
{
	c=9;
	return a+b;
}
