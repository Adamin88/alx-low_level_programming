#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}

	unsigned long int mask = ~0UL >> 1;

	while (mask && !(mask & n))
	{
		mask >>= 1;
	}

	for (; mask; mask >>= 1)
	{
		if (mask & n)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}

