#include <stdio.h>
#define p printf
void start(int);
int main()
{
    start(4);
    return 0;
}
void start(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (2 * i + 1); j++)
        {
            p("*");
        }
        p("\n");
    }
}
