#include <stdio.h>
void Temperatures(double x);
int main(void)
{
    double fah;
    printf("Convert fahrenheit to celsius and kelvin, "
	    "please enter a number of fahrenheit: ");

    while (scanf("%lf", &fah)==1)
    {
	Temperatures(fah);
    }


}

void Temperatures(double x)
{
    const float y = 273.16;
    float n = 5.0 /9.0 * (x-32.0);
    printf("Fahrenheit: \t%.3f\n", x);
    printf("Celsius: \t%.3f\n", n);
    printf("Kelvin: \t%.3f\n", n + y);
    printf("Enter the next value of fahrenheit: ");
}
