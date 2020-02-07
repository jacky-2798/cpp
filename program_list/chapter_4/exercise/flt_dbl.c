#include <stdio.h>
#include <float.h>
int main(void)
{
    float flt = 1.0/3.0;
    double dbl = 1.0/3.0;

    printf("   float(1/3) \t\tdouble(1/3)\n");
    printf("1. %0.6f \t\t%0.6f\n", flt, dbl);
    printf("2. %0.12f \t%0.12f\n", flt, dbl);
    printf("3. %0.16f \t%0.16f\n", flt, dbl);
    printf("\n   float/double precision\n"
	   "   %d digits \t\t%d digits", FLT_DIG, DBL_DIG);

    return 0;
}
