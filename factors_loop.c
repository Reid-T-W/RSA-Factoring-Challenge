#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * factors - determines the factors of a number
 * @number: number to be factored
 * @i: iteration counter
 * Return: void
 **/
void factors (unsigned long long int number)
{
	float multiplier;
	int i;
	int last_num;
	FILE *fptr;
	

	last_num = number % 10;
	if (last_num % 2 == 0)
	{
		for (i = 2; i < number; i+=2)
		{
			if (number % i == 0)
			{
				multiplier = number / i;
				printf("%llu=%d*%d\n",number,i,(int)multiplier);
				return;
			}
		}
		return;
	}
	else
	{
		for (i = 3; i < number; i+=2)
		{
			if (number % i == 0)
			{
				multiplier = number / i;
				printf("%llu=%d*%d\n",number,i,(int)multiplier);
				return;
			}
		}
		return;
	}
}
