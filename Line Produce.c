#include<stdio.h>
#define p printf
int main()
{
	int a=4;
	p("%d%d%d\n",a,++a,a++);
	return 0;
}
