#include <stdio.h>

double harmonic(double x, double y);

int main(void)
{
    double x, y;
    printf("Enter 2 nums:\n");
    scanf("%lf %lf", &x, &y);
    printf("The harmonic number of these is %.3lf", harmonic(x, y));
    return 0;
}

double harmonic(double x, double y)
{
    double res;
    return res = -((-x)+(-y))/2;
}
