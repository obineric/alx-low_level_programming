#include "main.h"

/**
 *
 * print_sign - Prgram to output the sign of a number
 *
 *Return: (-1) if negative, (0) if zero and (1) for positive
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}


