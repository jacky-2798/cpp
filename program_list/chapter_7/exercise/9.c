#include<stdio.h>
int main(void)
{
    unsigned long num;
    int x, prime, count, line;
    printf("Enter a positive integer number:\n");
    for(scanf("%lu",&num),prime=2,line=0;prime<=(int)num;prime++)
    {
	for(x=1,count=0;count<2;x++)
	    if(prime%x==0)
		count++;
	if(prime==x-1)
	{
	    printf("%d\t", prime);
	    line++;
	}
	if(line==8)
	{
	    printf("\n");
	    line=0;
	}
    }
    return 0;
}
