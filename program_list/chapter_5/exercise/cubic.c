#include<stdio.h>
void cubic(double n);
int main()
{
    double x;
    printf("Enter a number: ");
    scanf("%lf", &x);
    cubic(x);
    return 0;
}
void cubic(double n)
{
    printf("%lf\n",n*n*n);
}
