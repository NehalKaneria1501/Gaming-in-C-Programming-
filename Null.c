#include<stdio.h>
#define p printf
int main()
{
	int i;
	int arr[10];
	int n=7;
	for(i=0;i<10;i++)
	{
		arr[i]=n*(i+1);
	}
	for(i=0;i<10;i++)
	{
		p("The value if %d * %d=%d\n",n,(i+1),arr[i]);
	}
	return 0;
}
