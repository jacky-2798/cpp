#include <stdio.h>
int main()
{
	float pint, cup, ounce,
	      tablespoon, teaspoon;
	printf("enter a volume in cups: ");
	scanf("%f", &cup);
	pint = cup * 2; ounce = cup / 8;
	tablespoon = ounce / 2; teaspoon = tablespoon / 3;

	printf("pints:\t\t%f\n", pint);
	printf("ounces:\t\t%f\n", ounce);
	printf("tablespoons:\t%f\n", tablespoon);
	printf("teaspoons:\t%f\n", teaspoon);

	return 0;
}
