#include <stdio.h>
int main(void)
{
    int num = 1;

    while (num <= 20)
    {
	printf("%d\t%d\n", num, num*num);
	num = num + 1;
    }
    return 0;
}
