#include<stdio.h>
#define p printf
int main()
{
	int c=6;
	int b=6;
	int a=(c==b)?3:7;
	p("The value of a is %d",a);
	return 0;
}
