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
	int i, k;
	char rev_word[1000] = {0};
	int j = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		rev_word[j] = s[i];
		j++;
	}
	int length = (int) strlen(rev_word);
	for (k = 0; k < length; k++)
	{
		_putchar(rev_word[k]);
	}
	_putchar('\n');
}
