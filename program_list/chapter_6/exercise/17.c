#include<stdio.h>
int main(void)
{
    int year;
    double money, rate, withdraws;
    money=100;
    rate=0.8;
    withdraws=10;
    for (year=1;money>0;year++)
    {
	money+=money*rate;
	money-=withdraws;
    }
    printf("%.3f", money);
    printf("It'll take %d years for Chuckie to empty his account.", year-1);
     return 0;
}
