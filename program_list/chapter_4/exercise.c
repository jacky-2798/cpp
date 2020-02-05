#include <stdio.h>
int main(void)

{
	char name[40] = "James";
	float cash = 60.999;

	printf("The %s family just may be $%06.2f dollars richer!", name, cash);

	return 0;
}
