#include <stdio.h>
int main(void)
{
    const int SIZE = 26;
    char ch[SIZE], letter;
    int index;

    for (letter = 'a', index = 0; index < SIZE; letter++, index++)
	ch[index] = letter;
    for (index = 0; index < SIZE; index++)
	printf("%c ", ch[index]);

    return 0;
}
