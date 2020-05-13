#include<stdio.h>
int main(void)
{
    const int SIZE = 5;
    double array[SIZE], array_2[SIZE];
    int i;

    printf("Input %d floating-point numbers to make an array: ", SIZE);
    for (i=0;i<SIZE;i++)
    {
	scanf("%lf",&array[i]);
    }
    array_2[0] = array[0];
    for (i=1;i<SIZE;i++)
    {
	array_2[i] = array_2[i-1] + array[i];
    }

    printf("Element| [0]\t[1]\t[2]\t[3]\t[4]\n       |\n"
	    "Array 1| ");
    for (i=0;i<SIZE;i++)
	printf("%.3lf\t",array[i]);
    printf("\n       |\nArray 2| ");
    for (i=0;i<SIZE;i++)
	printf("%.3lf\t",array_2[i]);

    return 0;
}
