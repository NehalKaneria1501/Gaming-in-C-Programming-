#include<stdio.h>
#define p printf
int main()
{
	int i;
	int n=7;
	for(i=10;i>=0;i--)
	{
		p("%d*%d=%d\n",n,i,n*i);
	}
	return 0;
}
