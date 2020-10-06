#include <stdio.h>
void chline(char ch, int i, int j);

int main(void)
{
    char ch;
    printf("Leave a character:\n");
    scanf("%s", &ch);
    chline(ch, 6, 7);

    return 0;
}

void chline(char ch, int i, int j)
{
    int x;
    for(;j>0;j--)
    {
	for(x=i;x>0;x--)
	    printf("%s",&ch);
	printf("\n");
    }
}
