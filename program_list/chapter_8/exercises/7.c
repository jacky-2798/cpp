#include<stdio.h>
#define OVERTIME 		1.5
#define TAXRATE_300 		0.15
#define TAXRATE_NEXT_150 	0.2
#define TAXRATE_REST 		0.25
int calculate(double p);
int main(void)
{
    char num;
    float payrate;
    printf( "*****************************************************************\n"
    	    "Enter the number corresponding to the desired pay rate or action:\n"
    	    "a) $8.75/hr \t\tb) $9.33/hr\n"
    	    "c) $10.00/hr\t\td) $11.20/hr\n"
    	    "q) quit\n"
    	    "*****************************************************************\n");
again :;
    if (scanf("%c",&num))
    {
	    switch(num)
	    {
		case 'a' :payrate = 8.75;
			calculate(payrate);
			break;
		case 'b' :payrate = 9.33;
			calculate(payrate);
			break;
		case 'c' :payrate = 10.00;
			calculate(payrate);
			break;
		case 'd' :payrate = 11.20;
			calculate(payrate);
			break;
		case 'q' :break;
		default :printf("Please enter the number among 1~5:\n"
				"1) $8.75/hr \t\t2) $9.33/hr\n"
				"3) $10.00/hr\t\t4) $11.20/hr\n"
				"5) quit\n");
			 goto again;
	    }
    }
    return 0;
}

int calculate(double p)
{
    float t, gross_pay, taxes, net_pay;
    printf("Now, let me know that how many hours you've been worked in a week(q to quit):\n");
	if ((scanf("%f", &t))==1 && t>40)
	{
	    gross_pay=p*40+(t-40)*OVERTIME*p;
	    if (gross_pay>450)
		taxes=(gross_pay-450)*TAXRATE_REST+300*TAXRATE_300+150*TAXRATE_NEXT_150;
	    else if (gross_pay>300 && gross_pay<=450)
		taxes=(gross_pay-300)*TAXRATE_NEXT_150+300*TAXRATE_300;
	    else
		taxes=gross_pay*TAXRATE_300;
	    net_pay=gross_pay-taxes;
	    return printf("gross pay:\t%.2f\ntaxes:\t\t%.2f\nnet pay:\t%.2f\n", gross_pay, taxes, net_pay);
	}
	else
	{
	    gross_pay=p*t;
	    if (gross_pay>450)
		taxes=(gross_pay-450)*TAXRATE_REST+300*TAXRATE_300+150*TAXRATE_NEXT_150;
	    else if (gross_pay>300 && gross_pay<=450)
		taxes=(gross_pay-300)*TAXRATE_NEXT_150+300*TAXRATE_300;
	    else
		taxes=gross_pay*TAXRATE_300;
	    net_pay=gross_pay-taxes;
	    return printf("gross pay:\t%.2f\ntaxes:\t\t%.2f\nnet pay:\t%.2f\n", gross_pay, taxes, net_pay);
	}
}
