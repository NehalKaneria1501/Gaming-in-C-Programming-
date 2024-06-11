#include<stdio.h>
#define p printf
int factorial(int);
int main()
{
	p("The value of factorial 6=%d",factorial (6));
	return 0;
}
int factorial(int n)
{
	if(n==1||n==0)
	{
	return 1;
    }
	return n*factorial(n-1);
}
