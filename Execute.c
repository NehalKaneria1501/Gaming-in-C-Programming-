#include <stdio.h>
#define p printf
int main() 
{
    int i=3;
    do 
	{
        p("Executing at least once and at most twice=%d\n",i);
        i++;
    }
	while (i<1 && i<3);
    return 0;
}

