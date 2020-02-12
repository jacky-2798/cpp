#include <stdio.h>
void better(int ch);
int main(void)
{
    int num;
    const int gn = 'g';

    char ch_a = 'a';
    num = (int)ch_a - 1;

    //printf("%d%d%c%c\n", num, gn, num, gn);
    while (num++ < gn)
	printf("%c ", (char)num);
    printf("\nDone!\n");

    better((int)ch_a);

    return 0;
}

// a better version
void better(int ch)
{
    //char ch = 'a';
    while (ch<='g')
	printf("%c ", ch++);
    printf("\n");
}
