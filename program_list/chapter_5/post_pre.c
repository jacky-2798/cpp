#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++;
    pre_b = ++b;
    printf("a    a_post   b   pre_b \n"
	    "%1d %6d %6d %6d\n", a, a_post, b, pre_b);

    return 0;
}
