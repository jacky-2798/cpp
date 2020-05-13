#include<stdio.h>
int main(void)
{
    int terms, i;
    double x, y;//sum

    printf("Consider these tow infinit series:\n"
	    "1+1/2+1/3+1/4+...\n"
	    "1-1/2+1/3-1/4+...\n"
	    "Enter a number to look at the terms totals after it: ");
    for(scanf("%d", &terms),i=2,x=1.0,y=1.0;i<=terms;i++)
	{
	    x += 1.0/i;
	    if(i%2==1)
	    {
		y += 1.0/i;
	    }
	    else
	    {
		y -= 1.0/i;
	    }
	}
    printf("The total of the first series after %d terms is: %lf.\n", terms, x);
    printf("The total of the second series after %d terms is: %lf.\n", terms, y);

    return 0;
}
