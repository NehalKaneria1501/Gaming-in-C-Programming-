#include<stdio.h>
#define p printf
int main()
{
	int i=5;
	int *ptr=&i;
	p("The value of i=%d\n",i);
	p("The value of ptr=%u\n",ptr);
	p("The address of i=%u\n",&i);
	ptr=ptr-2;
	p("The value of ptr after ptr is increment=%u\n",ptr);
	if(ptr>&i)
	{
		p("Ptr is greater");
	}
	else
	{
		p("Ptr is not greater");
	}
	return 0;
}
