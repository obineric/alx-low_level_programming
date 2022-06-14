#include "main.h"
#include<string.h>

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
	char rev_word;
	int j = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		rev_word[j] = s[i];
		j++
	}
	_putchar('\n');
}
