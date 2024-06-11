#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define p printf
int main()
{
	int number;
	srand(time(0));
	number=rand()%100+1;
	p("The number=%d",number);
	return 0;
}
