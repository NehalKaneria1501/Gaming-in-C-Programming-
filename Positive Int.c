#include<stdio.h>
#define p printf
int countPositiveNumbers(int*arr,int n)
{
	int i;
	int pos_count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
		pos_count++;
	     }
	}
	return pos_count;
}
int main()
{
	int i,n;
	int arr[]={2,-1,5,6,0,-3};
	p("Array:");
	for(i=0;i<n;i++)
	{
		p("%d",arr[i]);
	}
	p("\n");
	p("Count of Positive elements=%d\n",countPositiveNumbers(arr,n));
	return 0;
}
