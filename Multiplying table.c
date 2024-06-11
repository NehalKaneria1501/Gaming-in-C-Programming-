#include<stdio.h>
#define p printf
int main()
{
	int i;
	int arr[10];
	for(i=0;i<10;i++)
	{
		arr[i]=5*i;
		p("The value if 5 * %d\n",i+1,arr[i]);
	}
	return 0;
}
