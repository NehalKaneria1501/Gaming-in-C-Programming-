#include<stdio.h>
#define p printf
void swap(int*,int*);
int main()
{
	int a=5;
	int b=7;
	p("Value of a and b before swap:%d and %d\n",a,b);
	swap(&a,&b);
	return 0;
}
void swap(int *aptr,int *bptr)
{
int temp;
temp=*aptr;
*aptr+*bptr;
*bptr=temp;
}
