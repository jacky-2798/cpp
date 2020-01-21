#include <stdio.h>
void jolly(void);
void deny(void);
int main()
{
    jolly();
    jolly();
    printf("\n");
    jolly();
    deny();
    return 0;
}
void jolly(void)
{
	printf("for he's a jolly good fellow!\n");
}
void deny(void)
{
	printf("which nobody can deny!\n");
}
