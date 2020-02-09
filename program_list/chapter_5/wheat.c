#include <stdio.h>
#define SQUARE 64
int main(void)
{
    const double CROP = 2E16;
    double current, total;
    int count = 1;

    printf("square \t\tgrains \t\ttotal \t\tfraction of \n");
    printf("       \t\tadded \t\tgrains \t\tworld total \n");
    total = current = 1.0;
    /*printf("%4d \t\t%.2e \t%.2e \t%.2e\n",
	    count, current, total, total/CROP);
    */

    while (count <= SQUARE)
    {
        printf("%4d \t\t%.2e \t%.2e \t%.2e\n",
	        count, current, total, total/CROP);
	count = count + 1;
	current = 2.0 * current;
	total = total + current;
	
        /*printf("%4d \t\t%.2e \t%.2e \t%.2e\n",
	        count, current, total, total/CROP);
	*/
    }
    printf("\nThat's all.\n");


    return 0;
}
