/*inch_cm.c --converts inch to centimeter */
#include <stdio.h>
int main(void)
{
	float inch;
	float cm;
	
	printf("pls enter a number in inches: ");
	scanf("%f", &inch);
	cm = inch * 2.54;
	printf("%f inch(es) = %f\n", inch, cm);

	return 0;
}
