#include<stdio.h>
unsigned long Fibonacci(unsigned n);

int main(void)
{
    long num;
    printf("Enter a integer number:\n");
    scanf("%ld", &num);
    printf("Here's the answer: %ld.\n", Fibonacci(num));
    return 0;
}

unsigned long Fibonacci(unsigned n)
{
    if (n > 2)
	return Fibonacci(n-1) + Fibonacci(n-2);
    else
	return 1;
}
