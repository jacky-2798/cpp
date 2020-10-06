#include <stdio.h>
double min(double x, double y);
int main(void)
{
    printf("%lf",min(3.14159, 3.1415));
    return 0;
}

double min(double x, double y)
{
    double max = x;
    if(y>max)
	max = y;
    return max;
}
