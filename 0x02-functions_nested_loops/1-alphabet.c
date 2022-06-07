#include "main.h"

/**
 * print_alphabet - Program to output the lowercase alphabets from a to z
 *
 * Return: 0
 *
 */
void print_alphabent(void)
{
	char c[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
