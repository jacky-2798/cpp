#include<stdio.h>
#define SIZE 5
int main(void)
{
    int quack, index;
    int value[SIZE];
    quack = 2;

    /*value[4] = ((value[3] = ((value[2] = ((value[1] = ((value[0]
		       	= (quack += 5)) *= 10)) -= 6)) /= 8)) %= 3);*/

    value[0]= (quack +=5);
    value[1]= (value[0] *=10);
    value[2]= (value[1] -=6);
    value[3]= (value[2] /=8);
    value[4]= (value[3] %=3);

    for (index = 0; index < SIZE; index++)
	printf("%5d", value[index]);

    return 0;
}
