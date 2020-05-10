#include <stdio.h>
int main(void)
{
    const int ROW = 5;
    int index_sp, row;
    char let, ch_as, ch_des;

    printf("Enter a letter: ");
    scanf("%c", &let);
    for (row = 0; row < ROW; row++)
	{
	    for (index_sp = 0; index_sp < (4-row); index_sp++)//space
		printf(" ");
	
	    for (ch_as = let - 4; (ch_as+4-row) <= let; ch_as++)//ascending
		printf("%c", ch_as);
	
	    for (ch_des = (let-4+(row-1)); (ch_des+4) >= let; ch_des--)//descending
		printf("%c", ch_des);
	
	    printf("\n");
	}

    return 0;
}
