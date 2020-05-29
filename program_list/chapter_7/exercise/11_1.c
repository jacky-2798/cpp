#include<stdio.h>
#include<string.h>
#define ARTICHOKES 2.05f
#define BEETS 1.15f
#define CARROTS 1.09f
#define DISCOUNT 0.05f
#define POINT 100
#define CHARGES_5 6.5f
#define CHARGES_5_20 14.0f
#define CHARGES_20PLUS 0.5f
float cal_charges(float i);
int main(void)
{
    char ch;
    float total, charges;
    float gross_a=0, gross_b=0, gross_c=0;
    float pounds=0, pounds_a=0, pounds_b=0, pounds_c=0, pounds_total=0;
    printf("Please select what you want to order:\n"
	    "---------------------------------------------\n"
	    "a) Artichokes\t\tb) Beets\n"
	    "c) Carrots\t\tq) Quit\n"
	    "---------------------------------------------\n");
    while((ch=getchar())!='q')
    {
	if(ch=='\n')
	    continue;
	switch(ch)
	{
	    case 'a':printf("\nHow many pounds of artichokes do you want?\n"
			     "Enter the number of pounds:\n");
		     if((scanf("%f", &pounds))!=1)
		     {
			 printf("Input error!\n");
			 break;
		     }
		     pounds_a+=pounds;
		     gross_a=pounds_a*ARTICHOKES;
		     printf("\n%.2f pound(s) of atichokes cost %.2f$.\n", pounds_a, gross_a);
		     break;
	    case 'b':printf("\nHow many pounds of beets do you want?\n"
			     "Enter the number of pounds:\n");
		     if((scanf("%f", &pounds))!=1)
		     {
			 printf("Input error!\n");
			 break;
		     }
		     pounds_b+=pounds;
		     gross_b=pounds_b*BEETS;
		     printf("\n%.2f pound(s) of beets cost %.2f$.\n", pounds_b, gross_b);
		     break;
	    case 'c':printf("\nHow many pounds of carrots do you want?\n"
			     "Enter the number of pounds:\n");
		     if((scanf("%f", &pounds))!=1)
		     {
			 printf("Input error!\n");
			 break;
		     }
		     pounds_c+=pounds;
		     gross_c=pounds_c*CARROTS;
		     printf("\n%.2f pound(s) of carrots cost %.2f$.\n", pounds_c, gross_c);
		     break;
	    default:printf("Input error!\n");
		    break;
	}
	printf("\nWhat else do you want?\n"
		"---------------------------------------------\n"
		"a) Artichokes\t\tb) Beets\n"
		"c) Carrots\t\tq) To Shopping Cart\n"
		"---------------------------------------------\n");
    }
    pounds_total=pounds_a+pounds_b+pounds_c;
    charges=cal_charges(pounds_total);
    total=gross_a+gross_b+gross_c+charges;
    printf("\nShopping Cart:\n"
	    "---------------------------------------------\n"
	    "|Products  |Price/lb\t\b|Weight(bl)\t\b\b\b\b\b|Cost\t\n"
	    "---------------------------------------------\n");
	    printf("|Artichokes|%.2f$\t\b|%.2f\t   |%.2f$\n", ARTICHOKES,pounds_a,gross_a);
	    printf("---------------------------------------------\n");
	    printf("|Beets     |%.2f$\t\b|%.2f\t   |%.2f$\n", BEETS,pounds_b,gross_b);
	    printf("---------------------------------------------\n");
	    printf("|Carrots   |%.2f$\t\b|%.2f\t   |%.2f$\n", CARROTS,pounds_c,gross_c);
	    printf("*********************************************\n");
	    printf("|Total Weight:\t\t\t   |%.2fbl\n", pounds_total);
	    printf("---------------------------------------------\n");
	    printf("|Shipping Charge:\t\t   |%.2f$\n", charges);
	    printf("---------------------------------------------\n");
	    if(total>=POINT)
	    {
		float dis_price=total*DISCOUNT;
		printf("|Discount:\t\t\t   |-%.2f$\n", dis_price);
		printf("---------------------------------------------\n");
		printf("|After Discount Total:\t\t   |%.2f$\n", total-dis_price);
		printf("---------------------------------------------\n");
	    }
	    else
	    {
		printf("|Total:\t\t\t\t   |%.2f$\n", total);
		printf("---------------------------------------------\n");
	    }
    return 0;
}
float cal_charges(float i)
{

    const float pounds_5=5, pounds_20=20;
    if(i<=pounds_5)
	return CHARGES_5;
    else if(i>pounds_5 && i<=pounds_20)
	return CHARGES_5_20;
    else
	return CHARGES_5_20+(i-pounds_20)*CHARGES_20PLUS;
}
