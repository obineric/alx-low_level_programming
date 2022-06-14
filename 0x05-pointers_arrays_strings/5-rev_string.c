#include "main.h"
#include<string.h>

/**
 * rev_string - prints letters in reverse
 *
 * @s: string input
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char rev_word[1000];
	int j = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		rev_word[j] = s[i];
		j++;
	}
	_putchar('\n');
}
