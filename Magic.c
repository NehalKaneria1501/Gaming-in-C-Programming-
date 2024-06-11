#include<stdio.h>
#define  p printf
int main()
{
	char ch1[45];
	p("Enter your name and see the magic\n");
	scanf("%s",ch1);
	p("Your name=%s",ch1);
	return 0;
}
