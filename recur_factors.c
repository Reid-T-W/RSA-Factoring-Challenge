#include "main.h"
#include <stdio.h>
/**
 * factors - determines the factors of a number
 * @number: number to be factored
 * @i: iteration counter
 * Return: void
 **/
void factors (long int number, int i)
{
	float multiplier;

	if (number % i == 0)
	{
		printf("In if\n");
		multiplier = number / i;
		printf("%ld=%d*%f",number, i, multiplier);
		return;
	}		
	else
	{
		factors(number, i + 1);
	}
}
