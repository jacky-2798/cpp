#include <stdio.h>
int main(void)
{
    int num = 1;

    while (num++ < 20)
    {
	printf("%d\t%d\n", num, num*num);
    }
    return 0;
}
