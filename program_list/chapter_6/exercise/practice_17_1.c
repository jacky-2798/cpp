#include<stdio.h>
int main(void)
{
    int year;
    const float RATE = 0.08;
    float bal, withdraws;
    withdraws = 10;
    bal =100;

    for (year = 1; bal > 0; year++)
    {
	bal += bal * RATE;
	bal -= withdraws;
    }
    printf("It'll take %d years for Chuckie to empty his account.", year-1);

    return 0;
}
