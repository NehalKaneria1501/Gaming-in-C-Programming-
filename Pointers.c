#include<stdio.h>
#define p printf
int main()
{
	int i=72;
	int *j=i;
	p("The address of i=%u\n",j);
	p("The address of i=%u\n",*j);
	p("The value of i=%d\n",*j);
	p("The value of i=%d\n",3i);
	return 0;
}
