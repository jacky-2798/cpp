#include<stdio.h>
#include<string.h>
int main(void)
{
    int i;
    char input[255];

    printf("Please input a line of character that "
	    "the \nprogram will prints it in reverse order:\n");
    i = -1;
    do
    {
	i++;
	scanf("%c", &input[i]);
    }
    while(input[i]!='\n');
    for (;i>=0;i--)
	printf("%c", input[i]);
    return 0;
}
