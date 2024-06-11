#include<stdio.h>
#define p printf
int main()
{
    int sum=0;
    int i;
    for(i=1;i<11;i++)
    {
        sum+=(i*8);
    }
    p("The value of sum=%d",sum);
    return 0;
}

