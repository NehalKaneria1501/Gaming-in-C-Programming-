#include<stdio.h>
#define p printf
int main()
{
	int i=72;
	int j=723;
	p("The address of i and j=%u and %u\n",&i,&j);
	p("The address of i and j=%u and %u\n",&i,&j);
	return 0;
}
