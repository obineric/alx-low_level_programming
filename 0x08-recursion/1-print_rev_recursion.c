#include "main.h"

/**
 * _print_rev_recursion - Program to pring a string backwards
 * @s: string input
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	unsigned int length;
	length = sizeof(s) - 1;

	if (length == 0)
	{
		_putchar(s[0]);
		_putchar('\n');
	}
	else
	{
		_putchar(s[length - 1]);
		s[(length - 1)] = '\0';
		_print_rev_recursion(s);
	}
}


