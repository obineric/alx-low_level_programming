#include "main.h"

/**
 * print_array - program to print the members of an array
 *
 * @a: input array
 *
 * @n: number of input to print
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i <  n-1)
		{
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(a[i]);
		}
		_putchar('\n');
	}
}
