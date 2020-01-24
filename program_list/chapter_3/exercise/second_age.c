#include <stdio.h>
int main()
{
	int years;
	double seconds;
	seconds = years * 3.156e7;
	printf("how old are you?\n");
	printf("___\b\b\b");
	scanf("%d", &years);
	printf("well, then you have lived for about %f seconds.\n", seconds);

	return 0;
}
