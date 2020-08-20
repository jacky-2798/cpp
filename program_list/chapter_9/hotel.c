#include<stdio.h>
#define PRICE 200
#define DISCOUNT 0.95
double ninety_five(int num);

int main(void)
{
    int n;
    printf("How many days you wanna stay?\n");
    scanf("%d", &n);
    printf("Your room rate total is %lf in discount, thank you.",
	    ninety_five(n));

    return 0;
}

double ninety_five(int num)
{
    double roomrate;
    roomrate = PRICE;

    if (num>1)
	roomrate = roomrate * DISCOUNT + ninety_five(num-1);
    else if (num>0)
	roomrate= 
}

//this program is uncompleted.
