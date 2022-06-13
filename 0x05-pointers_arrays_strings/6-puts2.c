#include "main.h"
#include <string.h>

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

	for (i = 0; i < strlen(str) - 1; i = i + 2)
	{
		_putchar(str[i]);
	}
}
