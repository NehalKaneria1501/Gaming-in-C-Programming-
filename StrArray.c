#include<stdio.h>
#define p printf
int main()
{
	int i;
	char str1[]="Nehal";
	for(i=0;i<6;i++)
	{
		p("%c",str1[i]);
	}
	return 0;
}
