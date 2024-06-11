#include<stdio.h>
#define p printf
int main()
{
	int i=3;
	for(i=0;i<7;i++)
	{
		if(i==3)
		{
			continue;
		}
		p("The value of i=%d\n",i);
	}
	return 0;
}
