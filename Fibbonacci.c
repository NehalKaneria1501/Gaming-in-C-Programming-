#include<stdio.h>
#define p printf
int main()
	{
	 int n=8;
	 p("Enter the fibbonacci series:%d",n,fib(n));
	 return 0;
    }
	 int fib(int n)
	 {
	 	if(n==1 || n==2)
	 	{
	 		return 1;
		 }
		 return fib(n-1)+fib(n-2);
	 }
