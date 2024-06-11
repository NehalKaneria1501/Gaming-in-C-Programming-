#include<stdio.h>
#define p printf
int main()
{
	int arr[10];
	arr[0]=7;
	arr[1]=5;
	arr[2]=8;
	int *ptr=arr;
	p("The value at ptr=%d\n",*ptr);
	ptr=ptr+2;
	p("The value at ptr=%d\n",*ptr);
	return 0;
}
