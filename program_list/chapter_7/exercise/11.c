#include<stdio.h>
#define ARTICHOKES 2.05f
#define BEETS 1.15f
#define CARROTS 1.09f
#define DISCOUNT 0.95f
#define POINT 100
#define CHARGES_5 6.5f
#define CHARGES_5_20 14.0f
#define CHARGES_20PLUS 0.5f
float calculate(float x, float y);
int main(void)
{
    char ch;
    float pounds_a=0, pounds_b=0, pounds_c=0, pounds_total=0;
    printf("Please select what you want to order:\n"
	    "-------------------------------------\n"
	    "a) Artichokes\t\tb) Beets\n"
	    "c) Carrots\t\tq) Quit\n"
	    "-------------------------------------\n");
    while((ch=getchar())!='q')
    {
	switch(ch)
	{
	    case 'a':pounds_a+=calculate(ARTICHOKES, pounds_total);
		     break;
	    case 'b':pounds_b+=calculate(BEETS, pounds_total);
		     break;
	    case 'c':pounds_c+=calculate(CARROTS, pounds_total);
		     break;
	}
	pounds_total = pounds_a+pounds_b+pounds_c;
	printf("What else do you want? (Enter q to settlement)\n"
		"-------------------------------------\n"
		"a) Artichokes\t\tb) Beets\n"
		"c) Carrots\t\tq) To Settlement\n"
		"-------------------------------------\n");
    }
}
float calculate(float x, float y)
{
    const float pounds_5=5, pounds_20=20;
    float num, charges, num_total=0, cost, gross;
    printf("How many do you want?\n"
	    "Enter the number of pounds:\n");
    while((scanf("%f",&num))==1)
    {
	num_total += num;
	if(num_total+y<=pounds_5)
	{
	    cost = num_total*x+(charges=CHARGES_5);
	}
	else if(num_total+y>pounds_5 && num_total+y<=pounds_20)
	{
	    cost = num_total*x+(charges=CHARGES_5_20);
	}
	else
	{
	    cost = num_total*x+(charges=CHARGES_5_20+((num_total+y)-pounds_20)*CHARGES_20PLUS);
	}
	printf("---------------------------------\n"
		"Gross price:\t%.2f\n", gross=cost-charges);
	(cost>=POINT) ? printf("Discount price:\t%.2f\n", cost*=DISCOUNT) : cost;
	printf("Shipping charge:\t%.2f\n", charges);
	printf("Toltal:\t%.2f\n", cost);
	printf("---------------------------------\n"
		"Would you like to add more?\n"
		"Enter the number of pounds(n to add to cart):\n");
    }
    return num_total;
}
