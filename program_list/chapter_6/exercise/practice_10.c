#include<stdio.h>
int main(void)
{
    int a, b;
    int a_square, b_square ;
    long sum;
    printf("Enter lower and upper integer limits: ");
    scanf("%d%d",&a,&b);

    for (;(b-a)>0;)
    {
	a_square=a*a; b_square=b*b;
	for (sum=0;a<=b;a++)
	{
	    sum+=a*a;
	}
	printf("The sums of the squares from %d to %d is %ld.\n", a_square,b_square,sum);
	printf("Enter next set of limits: ");
	scanf("%d%d",&a,&b);
    }

    printf("Done");
    return 0;
}
