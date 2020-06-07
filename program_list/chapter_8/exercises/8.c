#include<stdio.h>
#include<ctype.h>
#include<math.h>
char get_choice(void);
char get_first(void);
float get_num(int x);
int main(void)
{
    int choice;
    float num_1, num_2;
    while((choice=get_choice())!='q')
    {
	switch(choice)
	{
	    case 'a':num_1=get_num(1);
		     num_2=get_num(0);
		     printf("%.2f + %.2f = %.2f\n", num_1, num_2, num_1+num_2);
		     break;
	    case 's':num_1=get_num(1);
		     num_2=get_num(0);
		     printf("%.2f - %.2f = %.2f\n", num_1, num_2, num_1-num_2);
		     break;
	    case 'm':num_1=get_num(1);
		     num_2=get_num(0);
		     printf("%.2f * %.2f = %.2f\n", num_1, num_2, num_1*num_2);
		     break;
	    case 'd':num_1=get_num(1);
		     num_2=get_num(0);
		     while(num_2==0)
			 num_2=get_num(2);
		     printf("%.2f / %.2f = %.2f\n", num_1, num_2, num_1/num_2);
	}
    }
    printf("Bye.\n");
    return 0;
}
char get_choice(void)
{
    int ch;
    printf("Enter the operation of your choice:\n"
	    "a. add\t\ts. subtract\n"
	    "m. multiply\td. divide\n"
	    "q. quit\n");
    ch=get_first();
    while(ch!='q'&&ch!='a'&&ch!='s'&&ch!='m'&&ch!='d')
    {
	printf("Please respond with a, s, m, d, or q.\n");
	ch=get_first();
    }
    return ch;
}
char get_first(void)
{
    int ch;
    ch=getchar();
    while(isspace(ch))
	ch=getchar();
    while(getchar()!='\n')
	continue;
    return ch;
}
float get_num(int x)
{
    char ch;
    float num;
    if(x==1)
	printf("Enter first number: ");
    else if(x==0)
	printf("Enter second number: ");
    else
	printf("Enter a number other than 0: ");
    while((scanf("%f",&num))!=1)
    {
	while((ch=getchar())!='\n')
	    putchar(ch);
	printf(" is not a number.\nPlease enter a number, "
		"such as 2.5, -1.78E8, or 3: ");
    }
    while(getchar()!='\n')
	continue;
    return num;
}
