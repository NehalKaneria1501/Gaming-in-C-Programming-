#include<stdio.h>
#include<string.h>
#define p printf
int main()
{
	char source[]="Nehaal";
	char target[45];
	strcpy(target,source);
	p("The target string=%s",target);
	return 0;
}
