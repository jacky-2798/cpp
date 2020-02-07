#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[20], first_name[20];
    int letrs_nm, letrs_fn;

    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter your first name: ");
    scanf("%s", first_name);

    printf("%s %s\n", name, first_name);
    printf("%*d %*d\n", strlen(name),  strlen(name), strlen(first_name), strlen(first_name));
    printf("%s %s\n", name, first_name);
    printf("%-*d %-*d\n", strlen(name),  strlen(name), strlen(first_name), strlen(first_name));

    return 0;
}
