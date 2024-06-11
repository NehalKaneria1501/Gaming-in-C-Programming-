#include<stdio.h>
#define p printf
int main()
{
	char ch1[46];
	p("Enter your name and see the magic\n");
	gets(ch1);
	p("Your name=%s",ch1);
	puts(ch1);
	p("Done printing string");
	return 0;
}
