#include <stdio.h>
int main(void)
{
    int value;
    float valuee;

    for (value = 36; value > 0; value /= 2)
	printf("%3d\n", value);

    /*for (valuee = 36; valuee > 0; valuee /= 2)
	printf("%f\n", valuee);*/

    return 0;
}
