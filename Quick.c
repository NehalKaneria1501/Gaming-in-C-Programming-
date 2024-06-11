#include<stdio.h>
#define p printf
int main()
{
	int i=0;
	while(i<21)
	{
		if(i<=10)
		{
			p("The value of i=%d\n",i);
		}
		i++;
	}
	return 0;
}
