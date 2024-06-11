#include<stdio.h>
#define p printf
int main()
{
	int factorial=1;
	int n=4;
	int i;
    for(i=1;i<=n;i++)
    {
    	factorial*=i;
	}
	p("The value of factorial=%d",factorial);
	return 0;
}
