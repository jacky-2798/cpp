#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int count = 0;

    printf("Please enter text(# to end):\n");
    while((ch=getchar())!='#')
    {
	if(ch=='.')
	{
	    putchar('!');
	    count++;
	}
	else if(ch=='!')
	{
	    printf("!!");
	    count++;
	}
	else
	    putchar(ch);
    }
    printf("There are %d places were replaced.\n", count);
    return 0;
}
