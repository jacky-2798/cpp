#include<stdio.h>
#include<string.h>
#define STR 20
int main(void)
{
    char word[STR], ch;
    int str;

    printf("Please enter a word: ");
    scanf("%s", word);
    str=strlen(word);

    for (str -= 1; str >= 0; str--)
	printf("%c", ch=word[str]);

    return 0;
}
