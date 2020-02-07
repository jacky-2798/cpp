#include <stdio.h>
int main(void)
{
    float x, y;
    float s, ee;
    const float KmMile = 1.609,
	  	LiterGallon = 3.785;

    printf("Please enter the distance in kilometer: ");
    scanf("%f", &x);
    printf("Please enter the fuel consumption in liter: ");
    scanf("%f", &y);

    s = x / y;
    printf("A liter fuel run %0.1f kilometers.\n", s);
    s = (x / KmMile) / (y / LiterGallon);
    printf("A gllon fuel run %0.1f miles.\n", s);

    ee = y / x * 100;
    printf("In other words,"
	    " %0.1fliters fuel run 100KMs.\n", ee);

    return 0;
}

