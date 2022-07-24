#include "main.h"
#include <stdio.h>
/**
 * factors - determines the factors of a number
 * @number: number to be factored
 * @i: iteration counter
 * Return: void
 **/
void factors (long double number)
{
	float multiplier;
	int i;
	int last_num;
	long double ten = 10;
	long double two = 2;

	last_num = number % ten;
	if (last_num % two == 0)
	{
		for (i = 2; i < number; i+=2)
		{
			if (number % two == 0)
			{
				multiplier = number / i;
				printf("%Lfd=%d*%d\n",number,i,(int)multiplier);
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
				printf("%Lf=%d*%d\n",number,i,(int)multiplier);
				return;
			}
		}
		return;
	}
}
