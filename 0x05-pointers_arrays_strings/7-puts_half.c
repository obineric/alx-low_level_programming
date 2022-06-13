#include "main.h"
#include ,string.h>

/**
 * puts_half - program that prints the second half of a string
 *
 * @str: string input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int length = strlen(str) - 1;
	int count = 0;

	if (length % 2 == 0)
	{
		count = length / 2
	}
	else
	{
		count = (length - 1) / 2;
	}
	for (i = 0; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
