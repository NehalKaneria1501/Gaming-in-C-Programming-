#include<stdio.h>
#define p printf
int main()
{
	int age=45;
	int placeCode=12;
	if(age<=18)
	{
		p("You are eligible to drive");
	}
	else if(age>15)
	{
		p("You are not eligible to drive but will check for a toy vehicle for you!");
	}
	else
	{
		p("Sorry you are a kid and cannot drive");
	}
	return 0;
}
