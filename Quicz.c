#include<stdio.h>
#define p printf
void goodMorning();
void goodAfternoon();
void goodNight();
int main()
{
	goodMorning();
	goodAfternoon();
	goodNight();
	return 0;
}
void goodMorning()
{
	p("Bonjour good Morning\n");
}
void goodAfternoon()
{
	p("Bonjour good Afternoon\n");
}
void goodNight()
{
	p("Bonjour good Night\n");
}
