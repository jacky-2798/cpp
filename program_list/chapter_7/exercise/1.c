#include<stdio.h>
int main(void)
{
    char ch;
    int newline=0,
	space=0,
	other=0;

    printf("Enter text to be analyzed (# to quit):\n");
    while((ch=getchar())!='#')
    {
	if (ch == ' ')
	    space++;
	else if (ch == '\n')
	    newline++;
	else
	    other++;
    }
    printf("lines=%d, space=%d, other characters=%d.", newline, space, other);
    return 0;
}
