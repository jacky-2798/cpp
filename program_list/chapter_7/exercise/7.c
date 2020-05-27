#include<stdio.h>
#define PAYRATE 10
#define OVERTIME 		1.5
#define TAXRATE_300 		0.15
#define TAXRATE_NEXT_150 	0.2
#define TAXRATE_REST 		0.25

int main(void)
{
    float time, gross_pay, taxes, net_pay;
    printf("Let me know that how many hours you've been worked in a week(q to quit):\n");
    while((scanf("%f",&time))==1)
    {
	if (time>40)
	{
	    gross_pay=PAYRATE*40+(time-40)*OVERTIME*PAYRATE;
	    if (gross_pay>450)
		taxes=(gross_pay-450)*TAXRATE_REST+300*TAXRATE_300+150*TAXRATE_NEXT_150;
	    else if (gross_pay>300 && gross_pay<=450)
		taxes=(gross_pay-300)*TAXRATE_NEXT_150+300*TAXRATE_300;
	    else
		taxes=gross_pay*TAXRATE_300;
	    net_pay=gross_pay-taxes;
	}
	else
	{
	    gross_pay=PAYRATE*time;
	    if (gross_pay>450)
		taxes=(gross_pay-450)*TAXRATE_REST+300*TAXRATE_300+150*TAXRATE_NEXT_150;
	    else if (gross_pay>300 && gross_pay<=450)
		taxes=(gross_pay-300)*TAXRATE_NEXT_150+300*TAXRATE_300;
	    else
		taxes=gross_pay*TAXRATE_300;
	    net_pay=gross_pay-taxes;
	}
	printf("gross pay:\t%.2f\ntaxes:\t\t%.2f\nnet pay:\t%.2f\n", gross_pay, taxes, net_pay);
    }
    return 0;
}
