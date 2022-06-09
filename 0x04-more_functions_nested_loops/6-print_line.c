#include "main.h"

/**
 * print_line - Program to print lines using '_'
 *
 * Return: void
 *
 * @n: integer input
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
