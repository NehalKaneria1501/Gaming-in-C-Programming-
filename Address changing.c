#include<stdio.h>
#define p printf
int main()
{
	int i=30;
	p("The value of i before change ran=%d\n",i);
	change(i);
	p("The value of i after change ran=%d\n",i);
	return 0;
}
void change(int i)
{
	i=i*10;
}
