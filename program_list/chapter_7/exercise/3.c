#include<stdio.h>
int main(void)
{
    double  even=0, odd=0, even_sum=0, odd_sum=0;
    double num;

    printf("Enter some integers to evaluate them (0 to quit):\n");
    while (scanf("%lf",&num) && num != 0)
    {
	if ((int)num%2==0)
	{
	    even++;
	    even_sum += num;
	    //printf("%d,%d,%d\n", num, even, even_sum);
	}
	else
	{
	    odd++;
	    odd_sum += num;
	    //printf("%d,%d,%d\n", num, odd, odd_sum);
	}
    }
    printf("The total of even integers is %d, and it's average is %.1lf.\n", (int)even_sum, even_sum / even);
    printf("The total of odd integers is %d, and it's average is %.1lf.\n", (int)odd_sum, odd_sum / odd);
    return 0;
}
