#include<stdio.h>
#define p printf
int main()
{
	char source[]="aanehala";
	char target[]="Pariiii";
	p("The strcmp returns=%d",strcmp (source,target));
	return 0;
}
