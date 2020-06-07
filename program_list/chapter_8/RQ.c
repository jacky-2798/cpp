#include<stdio.h>
int main(void)
{
    putchar(getchar());
    putchar('H');
    putchar(getchar());
    putchar('\007');
    putchar(getchar());
    putchar('\n');
    putchar(getchar());
    putchar('\b');
    return 0;
}
