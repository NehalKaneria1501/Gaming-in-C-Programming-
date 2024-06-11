#include <stdio.h>
#define p printf
int main() 
{
    const float pi = 3.14;
    int area, radius;
    p("Enter the radius of circle: ");
    scanf("%d", &radius);
    area = pi * radius * radius;
    p("Area of the circle: %d\n", area);
    return 0;
}
