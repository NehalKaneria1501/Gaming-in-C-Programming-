#include<stdio.h>
#define p printf
int main()
{
	int i=0;
	while(i<=8)
	{
		if(i==5)
		{
			break;
		}
		p("The value of i=%d\n",i);
		i++;
	}
	p("We are outside the loop now");
	return 0;
}
