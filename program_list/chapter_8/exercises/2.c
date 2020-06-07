#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int i=0;
    while((ch=getchar())!=EOF)
    {
	if(ch==' ')
	    continue;
	else if(ch=='\n')
	{
	    printf("\\n\n");
	    i=0;
	}
	else if(ch=='\t')
	    printf("\\t ");
	else
	{
	    printf("%c_%d ", ch, (int)ch);
	    i++;
	}
	if(i==10)
	{
	    printf("\n");
	    i=0;
	}
    }
    return 0;
}
