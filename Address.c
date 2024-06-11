#include<stdio.h>
#define p printf
int main()
{
	int i=3;
	p("The address of i=%u\n",&i);
	p("The value of i=%u\n",&i);
	return 0;
}
