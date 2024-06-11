#include<stdio.h>
#include<string.h>
#define p printf
int main()
{
	int i;
	char st[6];
	p("Enter the string of length 5 you want to input using percent c");
	for(i=0;i<5;i++)
	{
		scanf("%c",&st[i]);
		fflush(stdin);
	}
	st[5]='\0';
	p("Comparing this string pari given=%d",strcmp,("pari"),(st));	 
	return 0;
}
