#include<stdio.h>
#define p printf
int main()
{
	int i;
	int marks[5];
	for(i=0;i<5;i++)
	{
		p("Enter the scored of student=%d\n",i);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		p("The marks scored by student is %d and %d\n",i+1,marks[i]);
	}
	return 0;
}
