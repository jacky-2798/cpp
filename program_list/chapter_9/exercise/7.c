#include <stdio.h>
#include <ctype.h>

int isletter(char ch);	//to report whether it is a letter.

int main()
{
    char ch;
    int n;
    printf("please enter a phrase:\n");
    while ((ch=getchar())!=EOF)
    {
	if(ch=='\n')
	    continue;
	n= isletter(ch);
	if(n!=-1)
	    printf("The character %c would be letter %d.\n", ch, n);
	else
	    printf("The character %c is not a letter.\n", ch);
    }
}

int isletter(char ch)
{
    ch=tolower(ch);
    if(isalpha(ch))
	return ((int)ch-(int)'a'+1);
    else
	return -1;
}
