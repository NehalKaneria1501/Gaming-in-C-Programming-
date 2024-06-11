#include<stdio.h>
#define p printf
void fuc(int *);
int main()
{
	int i=3;
	func(&i);
	p("The address of i=%d\n",&i);
	p("The value of i=%d\n",&i);
	return 0;
}
void func(int *ptr)
{
	p("The value of address ptr fronm function=%d",ptr);
}
