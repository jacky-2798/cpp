#include<stdio.h>
int main(void)
{
    int day, week, left;
    const int DAY_PER_WEEK = 7;
    printf("Enter the number of days: ");
    scanf("%d", &day);
    while (day>0) {
    week = day / DAY_PER_WEEK;
    left = day % DAY_PER_WEEK;
    printf("%d days are %d week(s), %d days.\n", day, week, left);
    printf("Enter next value(zero to quit): ");
    scanf("%d", &day);
    }
    return 0;
}
