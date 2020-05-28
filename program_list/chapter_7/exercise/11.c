#include<stdio.h>
#define ARTICHOKES 2.05f
#define BEETS 1.15f
#define CARROTS 1.09f
#define DISCOUNT 0.95f
#define POINT 100
#define CHARGES_5 6.5f
#define CHARGES_5_20 14.0f
#define CHARGES_20PLUS 0.5f
int calculate(float x);
int main(void)
{
    char ch;
    printf("Please select what you want to order:\n"
	    "-------------------------------------\n"
	    "a) Artichokes\t\tb) Beets\n"
	    "c) Carrots\t\tq) Quit\n"
	    "-------------------------------------\n");
    while((ch=getchar())!='q')
    {
	switch(ch)
	{
	    case 'a':calculate(ARTICHOKES);
		     break;
	    case 'b':calculate(BEETS);
		     break;
	    case 'c':calculate(CARROTS);
		     break;
	    default:
	}
    }
}
int calculate(float x)
{
    const float pounds_5=5, pounds_20=20;
    float num, num_total=0, cost;
    int mark;
    printf("How many do you want:\n");
    while((scanf("%f",&num))==1)
    {
	num_total += num;
	if(num_total<=pounds_5)
	{
	    cost = num_total*x+CHARGES_5;
	    mark = 0;
	}
	else if(num_total>pounds_5&&num<=pounds_20)
	{
	    cost = num_total*x+CHARGES_5_20;
	    mark = 1;
	}
	else
	{
	    cost = num_total*x+CHARGES_20PLUS;
	    mark = 2;
	}
	cost = (cost>=POINT) ? cost*DISCOUNT : cost;
    }
}
