#include<stdio.h>
#define p printf
int main()
{
	int a1=31;
	int a2=16;
	int a3=21;
	int a4=661;
	if(a1>a2 && a1>a3 && a1>a4)
	{
		p("a1 is the greatest");
	}
	else if(a2>a1 && a2>a3 && a2>a4)
	{
		p("a2 is the greatest");
	}
	else if(a3>a2 && a3>a1 && a3>a4 )
	{
		p("a3 is the greater");
	}
	else if(a4>a2 && a4>a3 && a4>a4)
	{
		p("a4 is the greater"); 
	}
	return 0;
}
