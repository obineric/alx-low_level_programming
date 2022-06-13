#include "main.h"
#include <string.h>

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
	int length = strlen(str);
	int count = 0;

	if (length % 2 == 0)
	{
		count = length / 2;
	}
	else
	{
		count = (length - 1) / 2;
	}
	for (i = count + 1; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
