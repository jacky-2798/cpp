#include <stdio.h>

void sort(double * pa, double * pb, double * pc);

int main()
{
    double x=1.234567890, y=1.1111111, z=6.6666666;
    sort(&x,&y,&z);
    printf("min = %lf, mid = %lf, max = %lf.\n", x, y, z);
    return 0;
}

void sort(double * pa, double * pb, double * pc)
{
    double max, min, mid;
    if (*pa > *pb || *pa > *pc)
    {
	mid = (*pb > *pc)? *pb : *pc;
	min = (*pb > *pc)? *pc : *pb;
	max = (*pa > mid)? *pa : mid;
	if(max==mid)
	    mid = *pa;
    }
    else
    {
	min = *pa;
	max = (*pb > *pc)? *pb : *pc;
	mid = (*pb > *pc)? *pc : *pb;
    }
    *pa = min;
    *pb = mid;
    *pc = max;
}
