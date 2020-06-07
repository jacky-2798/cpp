#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int upr=0, lwr=0, othr=0;
    while((ch=getchar())!=EOF)
    {
	if(isupper(ch))
	    upr++;
	else if(islower(ch))
	    lwr++;
	else
	    othr++;
    }
    printf("Uppercase letters: %d\nLowercase letters: %d"
	    "\nOther characters: %d\n", upr, lwr, othr);
    return 0;
}
