#include<stdio.h>
#include<ctype.h>
#define MAX 100
#define MIN 1
int main(void)
{
    int guess=50, min=MIN, max=MAX;
    char c;
    printf("Pick an integer from %d to %d. I'll try to guess "
	    "it.\nRespond with a y if my guess is right and "
	    "with \nan l if it is low and h for high.\n", MIN, MAX);
    printf("Uh...is your number %d?\n", guess);
    while((c=getchar())!='y')
    {
	if(c=='\n')
	    continue;
	if(c=='h')
	{
	    max=guess;
	    guess=max-(max-min)/2;
	    printf("Well, then, is it %d?\n", guess);
	}
	else if(c=='l')
	{
	    min=guess;
	    guess=(max-min)/2+min;
	    printf("Well, then, is it %d?\n", guess);
	}
	else
	    printf("Oh, please be serious!\n");
    }
    printf("I knew I could do it!\n");
    return 0;
}
