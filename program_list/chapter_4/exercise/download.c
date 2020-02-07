#include <stdio.h>
int main()
{
    float ds, filesz, sec;

    printf("Please enter your download speed in Mb/s: ");
    scanf("%f", &ds);
    printf("What's the size of the file(MB): ");
    scanf("%f", &filesz);

    sec = filesz / ds * 8;
    printf("At %.2f megabits per second, a file of %.2f megabytes\n downloads in %.2f seconds.", ds, filesz, sec);

    return 0;
}
