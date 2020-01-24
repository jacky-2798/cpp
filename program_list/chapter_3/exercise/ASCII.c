#include <stdio.h>
int main()
{
	int ch;

	printf("enter an ASCII code to check out what character does it represent: ");
	printf("___\b\b\b");
	scanf("%d", &ch);
	printf("the character is %c.\n", ch);
	
	return 0;

}
