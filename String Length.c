#include<stdio.h>
#define p printf
int mystrlen(char *st) 
{
    int length = 0;
    char *ptr = st;
    while(*ptr!='\0')
	 {
        length++;
        ptr++;
    }
    return length;
}
int main()
 {
    char st[]="Parudicanada";
    printf("The length of this string = %d\n",mystrlen(st));
    return 0;
}

