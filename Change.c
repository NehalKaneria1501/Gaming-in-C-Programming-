#include<stdio.h>
#define p printf
void change(int*ptr)
{
    *ptr=(*ptr)*10;
}
int main()
{
    int i=30;
    p("The address of i before change ran:%d\n",&i);
    change(&i);
    p("The value of i after change ran:%d\n",&i);
    return 0;
}
