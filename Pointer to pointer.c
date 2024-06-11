#include<stdio.h>
#define p printf
int main()
{
	int i=3;
	int *ptr1=&i;
	int **ptr2=&ptr1;
	p("The value of i=%d\n",i);
	p("The value of i=%d\n",*ptr1);
	p("The value of i=%d\n",**ptr2);
	return 0;
}
