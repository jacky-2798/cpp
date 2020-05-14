#include<stdio.h>
int main(void)
{
    int num = 5;
    int i;
    const int DUN = 150;

    for (i=1; num < DUN; i++)
    {
	num = (num-i) * 2;
	printf("Week %d|\t%d friends\n", i, num);
    }
    return 0;
}
