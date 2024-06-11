#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define p printf
int rockPaperScissior(char you,char comp)
{
	if(you==comp)
	{
		return 0;
	}
	else if((you=='r'&&comp=='p')||(you=='p'&&comp=='s')||(you=='r'&&comp=='s'))
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char you,comp;
	srand(time (0));
	int number=rand()%100+1;
	if(number<33)
	{
		comp='r';
	}
	else if(number<66)
	{
		comp='p';
	}
	else
	{
		comp='s';
	}
	p("Enter 'r' for rock,'p' for paper,'s' for scissior\n");
	scanf("%c",&you);
	int result=stonePaperScissior(you,comp);
	if(result==0)
	{
		p("Game Drawn\n");
	}
	else if(result==1)
	{
		p("You Win\n");
	}
	else
	{
		p("You Lose\n");
	}
	p("You chose %c and the computer chose %c",you,comp);
	return 0;
}
