#include<stdio.h>
#include<string.h>
int main(void)
{
    char ftname[20], name[20];
    int letters;

    printf("Please enter your first name, then name: \n");
    scanf("%s %s", ftname, name);
    printf("%s,%s\n", name, ftname);

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    letters = strlen(name);
    printf("%d\n", letters);
    printf("\"%*s\"\n", 3 + letters, name);
    return 0;
}

