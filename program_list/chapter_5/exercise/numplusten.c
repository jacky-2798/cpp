#include <stdio.h>
int main(void)
{
    int num, X;

    printf("Enter a integer number: ");
    scanf("%d", &num);

    X = num + 10;
    while (num<=X)
	printf("%d ", num++);

    return 0;
}
