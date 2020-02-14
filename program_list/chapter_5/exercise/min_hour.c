#include <stdio.h>
#define MIN_PER_H 60
int main(void)
{
    int min, hour, left;

    printf("Convert minutes to hours and minutes.\n"
	    "Enter the number of minutes(zero to quit): ");
    scanf("%d", &min);

    while (min>0)
    {
	hour = min / MIN_PER_H;
	left = min % MIN_PER_H;
	printf("%d minutes is %d hours, %d minutes.\n", min, hour, left);
	printf("Enter next value(zero to quit): ");
	scanf("%d", &min);
    }
    return 0;
}
