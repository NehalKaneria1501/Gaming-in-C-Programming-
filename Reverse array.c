#include<stdio.h>
#define p printf
int reverse(int a[],int n)
{
	int i;
	int temp;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
}
void display(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		p("%d",*ptr);
		ptr++;
	}
	p("\n");
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	display(arr,10);
	reverse(arr,10);
	display(arr,10);
	return 0;
}
