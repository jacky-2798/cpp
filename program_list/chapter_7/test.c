#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
int main(void)
{
    int n_ch = 0, n_word = 0;
    char ch;
    bool inword = false;
    int evaluate;

    printf("%d", evaluate = 1 > 2 ? 2 > 1 : 1 > 2);

    while ((ch = getchar()) != '\n')
    {
	n_ch++;
	if (ch != '.' && !inword)
	{
	    inword = true;
	    n_word++;
	}
	if (ch == '.' && inword)
	    inword = false;
    }
    printf("%d characters and %d words in line.\n", n_ch, n_word);
    return 0;
}
