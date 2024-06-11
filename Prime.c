#include<stdio.h>
#define p printf
int main()
{
	int i,n=5,isPrime=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			isPrime=0;
			break;
		}
	}
	if(isPrime)
	{
		p("The number is prime\n");
	}
	else
	{
		p("The number is not prime\n");
	}
	return 0;
}
