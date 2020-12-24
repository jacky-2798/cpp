#include <stdio.h>
#define ZTTZ "0 to the 0 is undefined, so it's using a value of 1."
double power(double n, int p);
int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power"
	    " to which\nthe number will be raised. Enter q"
	    " to quit.\n");
    while (scanf("%lf%d", &x, &exp) ==2)
    {
	xpow = power(x, exp);
	if (xpow==1&&x==0&&exp==0)
	    printf("%s\n",ZTTZ);
	else
	    printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
	printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n, int p)
{
    if (n==0&&p==0)
	return 1;

    double pow = 1;
    int i;

    if (p > 0)
	for (i = 1; i <= p; i++)
    	    pow *= n;

    if (p < 0)
    {
	for (i = 1; i <= -p; i++)
	    pow *= n;
	pow = 1 / pow;
    }
    return pow;
}
