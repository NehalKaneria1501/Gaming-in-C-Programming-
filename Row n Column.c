#include<stdio.h>
#define p printf
int main() 
{
    int i,j;
    int mulTable[3][10];
    int num[]={2,7,9};
    for(i=0;i<3;i++) 
	{
        for(j=0;j<10;j++)
		 {
            mulTable[i][j]=num[i]*(j+1);
        }
    }
    for(i=0;i<3;i++) 
	{
        for(j=0;j<10;j++) 
		{
            p("%d\t",mulTable[i][j]);
        }
        p("\n");
    }
    return 0;
}
