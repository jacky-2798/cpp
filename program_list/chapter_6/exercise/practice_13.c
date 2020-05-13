#include<stdio.h>
#include<math.h>
int power(int x, int y);
int main(void)
{
    const int SIZE=8;
    int i;
    int nums[SIZE];
    for (i=0;i<SIZE;i++)
	nums[i] = power(2,(i+1));
    i=0;
    do
    {
	printf("%d\t",nums[i]);
	i++;
    }	while(i<SIZE);

    return 0;
}
int power(int x, int y)
{
    int pow = 1;
    int z;

    for(z=1;z<=y;z++)
	pow *= x;
    return pow;
}
