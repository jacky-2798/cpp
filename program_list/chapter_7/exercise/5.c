#include<stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int count=0;

    while((ch=getchar())!= STOP)
    {
	    switch(ch)
	    {
		case '.':
		    putchar('!');
		    count++;
		    break;
		case '!':
		    printf("!!");
		    count++;
		    break;
		default:
		    putchar(ch);
	    }
    }
    printf("\nThere are %d places were replaced.\n", count);

    return 0;
}
