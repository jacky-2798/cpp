#include<stdio.h>
int main()
{
    int a, b;
    a = 5;
    b = 2;
    b = a;
    a = b;

    int x, y;
    x = 10;
    y = 5;
    y = x + y;
    x = x*y;

    printf("%d %d\n", b, a);
    printf("%d %d\n", x, y);
    return 0;
}
