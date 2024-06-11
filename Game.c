#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define p printf
int main() 
{
    int number,guess,nGuesses=1;
    srand(time(0));
    number=rand()%100+1;
    do 
	{
        p("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number) 
	 	{
            p("Lower number please\n");
        }
		 else if(guess<number)
		  {
            p("Greater number please\n");
        }
		 else 
		{
            p("Yayy you got it!\n You took %d attempts",nGuesses);
            break; 
        }
        nGuesses++; 
    }
	 while(guess!=number);
    return 0;
}
