#include<stdio.h>
#define p printf
int main()
{
	int marks1,marks2,marks3;
	p("Enter marks 1\n");
	scanf("%d",&marks1);
	p("Enter marks 2\n");
	scanf("%d",&marks2);
	p("Enter marks 3\n");
	scanf("%d",&marks3);
	float total=(marks1+marks2+marks3)/3;
	if(total>=40)
	{
		if(total>=40)
		{
			if(marks1<33 || marks2<33 || marks3<33)
			{
				p("Congratulation you are cleared your exam");
			}
			else
			{
				p("You are qualified requiring merit");
			}
		}
	}
	return 0;
}
