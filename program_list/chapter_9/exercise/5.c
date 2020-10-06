#include <stdio.h>
void larger_of(double * px, double * py);
int main(void)
{
    double x, y;
    printf("Please enter 2 different numbers:\n");
    scanf("%lf %lf", &x, &y);
    printf("Originally x = %lf, y = %lf.\n", x, y);
    larger_of(&x, &y);
    printf("The larger one is %lf.\n", x);
    printf("Now x = %lf, y = %lf.\n", x, y);
    return 0;
}

void larger_of(double *px, double *py)
{
    if (*px > *py)
	*py = *px;
    if (*py > *px)
	*px = *py;
}
