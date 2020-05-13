#include<stdio.h>
#include<math.h>
int main(void)
{
    float val_1, val_2;
    float diff, product, quotient;

    printf("Enter two different floating-point numbers (q to quit): ");

    for (;scanf("%f%f", &val_1, &val_2)==2; printf("q to quit: "))
    {
	printf("Two numbers inputed were: %.3f, %.3f.\n", val_1, val_2);
	diff = fabs(val_1-val_2);
	product = val_1*val_2;
	quotient = diff/product;
	printf("The result is: %.3f\n", quotient);
    }
    printf("Done!");
    return 0;
}
