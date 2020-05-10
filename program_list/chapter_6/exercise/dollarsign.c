#include <stdio.h>
int main(void)
{
    const int ROW = 5;
    int index;
    char dollar;

    for (index = 0; index < ROW; index++)
    {
	for (dollar = 0; dollar < (index+1); dollar++)
	    printf("%c", '$');
	printf("\n");
    }

    return 0;
}
