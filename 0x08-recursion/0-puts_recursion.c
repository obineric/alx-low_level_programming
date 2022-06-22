#include "main.h"

/**
 * _puts_recursion - Program to print letters of a string
 * @s: input string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if *s == '\0';
	{
		break;
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
}
