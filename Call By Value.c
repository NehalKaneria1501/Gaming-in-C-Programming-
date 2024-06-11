#include<stdio.h>
#define p printf
int sum(int *,int *);
int main()
{
	int x=5;
	int y=4;
	p("The value of a+b=%d",sum(&x,&y));
	p("The value of x and y=%d and %d",x,y);
	return 0;
}
int sum(int *a,int *b)
{
	*a=56;
	return *a+*b;
}
