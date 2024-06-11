#include<stdio.h>
#define p printf
int main()
{
	int area,width,height;
	p("Enter the width of a rectangle=\n");
	scanf("%d",&width);
	p("Enter the height of a rectangle=\n");
	scanf("%d",&height);
	area=width*height;
	return 0;
}
