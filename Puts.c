#include<stdio.h>
#define p printf
int main()
{
	char ch1[46];
	p("Enter your name and see the magic\n");
	gets(ch1);
	p("Your name=%s",ch1);
	return 0;
}
