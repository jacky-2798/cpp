//fathm_ft.c -- converts 2 fathoms to feet
#include<stdio.h>
int main()
{
    int feet, fathoms;
/*
	as the same with:
	int feet;
	int fathoms;
*/
    fathoms = 2;
    feet = 6 * fathoms;
    printf("there are %d feet in %d fathoms!\n", feet, fathoms);
    printf("yes, said %d feet!\n", feet);

    return 0;
}
