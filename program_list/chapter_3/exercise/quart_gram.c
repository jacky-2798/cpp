#include <stdio.h>
int main(void)
{
	float quart;
	float molecule;
	//float mass_mol = 3.0e-23;
	molecule = quart * 950 / 3.0e-23;

	printf("how many quarts of water do you have?\n");
	printf("I got ____ quarts of water.\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf("%f", &quart);
	printf("Ok, do you know how many water molecules in it?\n");
	printf("Let me tell you, there are about %e water molecules in it!", molecule);

	return 0;
}
