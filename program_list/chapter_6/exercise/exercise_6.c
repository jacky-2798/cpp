#include <stdio.h>
#define HOR 8
#define VER 4
int main(void)
{
    int horizon, vertical;

    for (vertical = 0; vertical < VER; vertical++)
    {
	for (horizon = 0; horizon < HOR; horizon++)
	    printf("$");
	printf("\n");
    }

    return 0;
}
