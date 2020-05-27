#include<stdio.h>
#define SINGLE_TAXPOINT 17850
#define HEADOFHOUSEHOLD_TAXPOINT 23900
#define MARRIED_JOINT_TAXPOINT 29750
#define MARRIED_SEPARATE_TAXPOINT 14875
int calculate(float x, float y);
int main(void)
{
    int num;
    float income;
    printf( "Please select the following types according to your situation:\n"
	    "**************************************************************\n"
	    "1) Single\t\t2) Head of Household\n"
	    "3) Married, Joint\t4) Married, Separate\n"
	    "5) Quit\n"
	    "**************************************************************\n");
again:;
    if(scanf("%d", &num) && num != 5)
    {
	switch(num)
	{
	    case 1:printf("Please enter your taxable income:\n");
		   while(scanf("%f", &income))
		   {
		       calculate(income, SINGLE_TAXPOINT);
		       printf("Enter next value or q to quit:\n");
		   }
		   break;
	    case 2:printf("Please enter your taxable income:\n");
		   while(scanf("%f", &income))
		   {
		       calculate(income, HEADOFHOUSEHOLD_TAXPOINT);
		       printf("Enter next value or q to quit:\n");
		   }
		   break;
	    case 3:printf("Please enter your taxable income:\n");
		   while(scanf("%f", &income))
		   {
		       calculate(income, MARRIED_JOINT_TAXPOINT);
		       printf("Enter next value or q to quit:\n");
		   }
		   break;
	    case 4:printf("Please enter your taxable income:\n");
		   while(scanf("%f", &income))
		   {
		       calculate(income, MARRIED_SEPARATE_TAXPOINT);
		       printf("Enter next value or q to quit:\n");
		       break;
		   }
	    default :printf("Please enter a number from 1 to 5:\n");
		     goto again;
	}
    }
    return 0;
}
int calculate(float x,float y)
{
    const float taxrate_15=0.15f, taxrate_28=0.28f;
    float tax;
    tax = (x<=y) ? x * taxrate_15 : y * taxrate_15 + (x-y)* taxrate_28;
    return printf("The tax of %.2f$ is %.2f$.\n", x, tax);
}
