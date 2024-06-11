#include<stdio.h>
#define p printf
int main() 
{
    int i;
    p("Using for loop:\n");
    for(i=1;i<=5;i++) 
	{
        p("%d",i);
    }
    p("\n");
    p("Using while loop:\n");
    i=1; 
    while(i<=5)
	 {
        p("%d",i);
        i++;
    }
    p("\n");
    p("Using do-while loop:\n");
    i=1; 
    do 
	{
        p("%d",i);
        i++;
    }
	while(i<=5);
    p("\n");
    return 0;
}
