#include <stdio.h>

void to_base_n(unsigned long x, unsigned int y);

int main(void)
{
    unsigned long number;
    unsigned int base;
    printf("Enter two integer (q to quit):\n");
    while(scanf("%lu %u", &number, &base)==2)
    {
	printf("Base-%u equivalent: ", base);
	to_base_n(number, base);
	putchar('\n');
	printf("Enter two integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_base_n(unsigned long x, unsigned int y)
{
    int r;
    if(x/y!=0)
	{
	    to_base_n(x/y,y);
	    printf("%d",r=x%y);
	}
    else
	printf("%d",r=x%y);
    return;
}
