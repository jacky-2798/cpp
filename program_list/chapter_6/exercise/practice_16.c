#include<stdio.h>
int main(void)
{
    float money1, money2, year;
    float x, y;
    printf("How many that Daphne and Deirdre was invest:");
    scanf("%f%f", &money1, &money2);

    year = 0;
    x = money1;
    y = money2;
    do {
	year++;
	x+=money1*0.1;
	y+=y*0.05;
    } while(x>=y);
    printf("In this case, it will take %.1f years for Deirdre to exceed Daphne.\n", year);
    printf("After %.1f years, Daphne will have %.3f$, and Deirdre will have %.3f$.", year, x, y);
    return 0;
}
