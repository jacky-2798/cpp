#include<stdio.h>
#include<math.h>
double result(double x, double y);
int main(void)
{
    double a,b,z;
    printf("Enter two floating-point numbers (q to quit): ");
    for (;scanf("%lf%lf",&a,&b)==2;printf("q to quit: "))
    {
	z=result(a,b);
	printf("Two nums inputed were: %.3f, %.3f.\n", a, b);
	printf("The result is: %.3f.\n", z);
    }
    printf("Done!");
    return 0;
}

double result(double x,double y)
{
    double sub, pro, quo;
    sub=fabs(x-y);
    pro=x*y;
    quo=sub/pro;
    return quo;
}
