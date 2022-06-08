#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints series of numbers till 98
 *
 *@n: integer input
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int i;
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
		_putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		int j;
		for (j = n; j > 98; j--)
		{
			printf("%d, ", j);
		}
		_putchar('\n');
	}
}


