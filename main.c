#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function that calls factors
 * Return: void
 */
void main(int argc, char *argv[])
{
	FILE *fptr;
	int num;
	long long int long_num;
	int ch;

	/*char *filename;*/
	if ((fptr = fopen(argv[1],"r")) == NULL){
		printf("Error! opening file");
		exit(1);
	}
	while (fscanf(fptr,"%lld", &long_num) != EOF)
	{
		factors(long_num);
	}
	return;
}
