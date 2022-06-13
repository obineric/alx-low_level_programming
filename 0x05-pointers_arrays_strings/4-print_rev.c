#include "main.c"

/**
 * print_rev - prints letters in reverse
 *
 * @s: string input
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	_putchar('\n');
}
