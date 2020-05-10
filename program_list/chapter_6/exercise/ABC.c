#include <stdio.h>
int main(void)
{
    const int ROW = 6;
    char ch;
    int row, mark;

    for (row = 0, mark = 'A'; row < ROW; row++)
    {
	for (ch = mark; ch<=(mark+row); ch++)
	    printf("%c", ch);
	mark = ch;
	printf("\n");
    }

    return 0;
}
