#include<stdio.h>
#define p printf
int main()
{
   int year=3444;
   p("Enter a year: ");
   scanf("%d",&year);
   if(year%400==0) 
   {
      p("leap year=%d", year);
   }
   else if(year%100==0) 
   {
      p("not a leap year=%d",year);
   }
   else if(year%4==0) 
   {
      p("leap year=%d",year);
   }
   else 
   {
      p("not a leap year=%d",year);
   }
	return 1;
}
