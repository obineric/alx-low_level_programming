#include "main.h"

/**
 * puts2 - prints odd number digits of a number
 *
 * @str: string input
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i = i + 2)
	{
		_putchar(i + '0');
	}
}
