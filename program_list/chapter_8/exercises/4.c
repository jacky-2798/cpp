#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main(void)
{
    char ch;
    float num_ch, num_wrd;
    float average;
    bool inword=false;
    for(num_ch=0,num_wrd=0;(ch=getchar())!=EOF;)
    {
	if(!isspace(ch)&&!ispunct(ch))
	    num_ch++;
	if(!isspace(ch)&&!inword)
	{
	    inword=true;
	    num_wrd++;
	}
	if(isspace(ch)&&inword)
	    inword=false;
    }
    average=num_ch/num_wrd;
    printf("The average of letters per word is %.1f.\n", average);
    return 0;
}
