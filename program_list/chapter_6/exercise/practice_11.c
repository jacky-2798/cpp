#include<stdio.h>
#define SIZE 8
int main(void)
{
    int nums[SIZE], x, i;
    printf("Enter %d integers pleace: ", SIZE);
    for (i=0;i<SIZE;i++)
	scanf("%d", &nums[i]);
    printf("%d integers prints in reverse order: \n", SIZE);
    for (x=(SIZE-1);x>=0;x--)
	printf("%d\t", nums[x]);
    return 0;
}
