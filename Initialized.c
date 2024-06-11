#include<stdio.h>
#define p printf
int main()
{
	int i;
	float marks[3]={3.4,2.3,5.3};
	for(i=0;i<3;i++)
	{
		p("The marks scored by student is %f and %f\n",i+1,marks[i]);
	}
	return 0;
}
