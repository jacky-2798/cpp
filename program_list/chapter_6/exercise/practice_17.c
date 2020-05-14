#include<stdio.h>
int main(void)
{
    int year;
    double money, rate, withdraws;
    money=100;
    rate=0.8;
    withdraws=10;
    year=1;
    while(money>0)
    {
	money+=money*rate;
	money-=withdraws;
	year++;
	printf("%.3lf", money);
    }
    printf("It'll take %d years for Chuckie to empty his account.", year-1);
    return 0;
}
