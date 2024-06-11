#include<stdio.h>
#define p printf
int main()
{
	int i;
    int marks[5];
    for(i=0;i<5;i++)
    {
        p("Enter the marks of student %d:",i);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        p("The marks scored by student %d:%d\n",i,marks[i]);
    }
    return 0;
}
