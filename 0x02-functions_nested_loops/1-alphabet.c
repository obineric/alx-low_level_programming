#include "main.h"

/**
 * main - Program to output the lowercase alphabets from a to z
 *
 * Return: 0
 *
 */
void print_alphabent(void)/*funtion to print the lowercase alphabets*/
{
	char c[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
