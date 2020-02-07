#include <stdio.h>
int main(void)
{
    char name[20];
    float height_m, height_cm;

    printf("Please enter your name: ");
    scanf("%s",name);
    printf("Enter your height in centimetre: ");
    scanf("%f",&height_cm);

    height_m = height_cm / 100;
    printf("%s, you are %0.3f meters tall.\n", name, height_m);

    return 0;
}
