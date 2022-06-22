#include "main.h"

/**
 * _print_rev_recursion - Program to pring a string backwards
 * @s: string input
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}


