#include<stdio.h>
#define p printf
int main()
{
	p("sum of first 5 natural numbers=%d",sum(5));
	return 0;
}
int sum(n)
{
	if(n==1)
	{
	return 1;
    }
    return sum(n-1)+n;
}
