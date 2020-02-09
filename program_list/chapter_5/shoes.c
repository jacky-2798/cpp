#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;

    printf("Shoe size (men's)\tfoot length\n");
    shoe = 3.0;
    while (shoe <= 18.5)
    {
	foot = SCALE*shoe+ADJUST;
	printf("%-.1f\t\t\t%-.1f inches\n", shoe, foot);
	shoe = shoe + 0.5;
    }

    return 0;
}
