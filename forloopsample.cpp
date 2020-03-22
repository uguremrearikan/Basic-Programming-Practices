
/* 
   1 - 1/x + 1/x² - 1 /x³ + ............+ 1/x¹⁰⁰

Q1) Find the result for x=10 values. (result must be "0.91")
Q2) Find the result of the formula for unkown number of x values.

!!( Try not to use pow function ) 

*/


#define _CRT_SECURE_NO_WARNINGS // this is optional for MSVS you can remove it
#include <stdio.h>



int main(void) {

	double x, result, term;

	int i, sign;

	do {
		printf("\n Enter a number for x other than zero:");
		scanf("%lf", &x);

		if (x == 0) 
		{
			printf("\n Zero is not allowed");
		}
	} while (x == 0);

	//initialition

	result = 1;
	term = 1;
	sign = -1;

	
	for (i = 1; i <= 100; i++)
	{
		//find the new term
		term = term * 1 / x;

		//add one more term to the result
		result = result + (term*sign);
		sign = sign * -1;

	}

	printf("\n Result is %.2f", result);





	return 0;
}
