#include<stdio.h>
int main(void)
{
    int n_ch=0;
    char ch;

    while ((ch=getchar())!='#')
    {
	if (n_ch==8)
	{
	    n_ch=0;
	    printf("\n");
	}
	    printf("%c:", ch);
	    printf("%d, ", (int)ch);
	n_ch++;
    }
    return 0;
}
