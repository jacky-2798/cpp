#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int ct=0;
    while((ch=getchar())!=EOF)
    {
	if(isspace(ch))
	    continue;
	else
	    ct++;
    }
    printf("There are %d characters.\n", ct);
}
