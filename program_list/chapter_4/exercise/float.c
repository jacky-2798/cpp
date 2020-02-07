#include <stdio.h>
int main(void)
{
    float fpn;
    printf("Enter a floating point number: \n");
    scanf("%f", &fpn);
    printf("A: The input is %0.1f or %0.1e\n", fpn, fpn);
    printf("B: The input is %+0.3f or %0.3E\n", fpn, fpn);

    return 0;
}
