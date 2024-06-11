#include<stdio.h>
#define p printf
int main()
{
	int marks;
	p("Enter your marks");
	scanf("%d",&marks);
	if(91<=100)
	{
		p("You are getting A grade");
	}
	else if(81<=90)
	{
		p("You are getting B grade");
	}
	else if(71<=80)
	{
		p("You are getting C grade");
	}
	else if(61<=70)
	{
		p("You are getting D grade");
	}
	else if(0<=60)
	{
		p("Then you are E grade so you not eligible for further studies");
	}
	return 0;
}
