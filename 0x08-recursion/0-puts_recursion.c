#include "main.h"

/**
 * _puts_recursion - Program to print letters of a string
 * @s: input string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
