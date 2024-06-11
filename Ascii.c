#include<stdio.h>
#define p printf
int main()
{
	char name[]="Harry";
	int i;
	for(i=0;i<5;i++)
	{
		name[i]++;
	}
	p("The string=%s",name);
	return 0;
}
