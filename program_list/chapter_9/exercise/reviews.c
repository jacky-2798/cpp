#include <stdio.h>
#define STARBAR "******************************"
int sum(int x,int y);
double sum_double(double x,double y);
void alter(int * x, int * y);
int which_max(int x, int y, int z);
int get_num(int up, int down);
void menu(void);


//2. 
int donut(int n);			//a.
int gear(int t1, int t2);		//b.
int guess(void);			//c.
double stuff_it(double d, double * pd);	//d.

//3
char n_to_char(int n);			//a.
int digits(double x, int n);            //b.
double which(double* x,double* y);      //c.
int random(void);                       //d.

int main(void)
{
    int x, y;
    printf("Please enter two integer numbers: \n");
    scanf("%d %d", &x, &y);
    printf("originally x =%d, y = %d.\n", x, y);
    alter(&x, &y);
    printf("now x = %d, y = %d.\n", x, y);

    printf("%s%s\n", STARBAR, STARBAR);

    printf("Please enter three int nums:\n");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("the greadest one is %d.\n", which_max(a, b, c));

    printf("%s%s\n", STARBAR, STARBAR);

    menu();
    printf("%d\n",get_num(4,1));
    return 0;
}

//4
int sum(int x,int y)
{
    return x+y;
}

//5
double sum_double(double x,double y)
{
    return x+y;
}

//6
void alter(int * x, int * y)
{
    int temp;
    temp = *x;
    *x += *y;
    *y = temp - *y;
}

//7
void salami(int num)
{
    int count;
    for(count = 1; count <= num; num++)
	printf("O salami mio!\n");
}

//8
int which_max(int x, int y, int z)
{
    if(x>=y&x>=z)
	return x;
    else if(y>=x&y>=z)
	return y;
    else
	return z;
}

//9
//a
void menu(void)
{
    printf("Please choose one of the following:\n"
	    "1) copy files	2) move files\n"
	    "3) remove files	4) quit\n"
	    "Enter the number of your choice:\n");
}

//b
int get_num(int up, int down)
{
    double num;
    while(scanf("%lf", &num)==1&&num-(int)num==0)
    {
	if (num>=down&&num<=up)
	    return num;
	else if (num<down||num>up)
	    menu();
    }
    return 4;
}
