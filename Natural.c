#include<stdio.h>
#define p printf
int main()
{
	int i=1;
	int sum=0;
	while(i<=10)
	{
		sum+=i;
		i++;
	}
	p("The sum of first 10 natural=%d",sum);
	return 0;
}
