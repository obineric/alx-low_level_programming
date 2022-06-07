#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabets 10 times
 *
 * Return: Always successful
 *
 */
void print_alphabet_x10(void)
{
	char alp[27] = "abcdefghijklmnopqrstuvwxyz";
	int n;
	int m;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 26; n++)
		{
		_putchar(alp[n]);
		}
		_putchar('\n');
	}
}
