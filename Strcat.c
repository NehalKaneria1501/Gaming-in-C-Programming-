#include<stdio.h>
#define  p printf
int main()
{
	char source[56]="Pariii";
	char target[]=" is a very nice girl";
	strcat(source,target);
	p("The source string=%s",source);
	return 0;
}
